H_FILES := $(shell find ./AntMAN/src -name \*.h)
C_FILES := $(shell find ./AntMAN/src -name \*.\*pp -not -name RcppExports.cpp)
R_FILES := $(shell find ./AntMAN/R ./AntMAN/tests -name \*.R -not -name RcppExports.R)

R_CMD := R -q

PACKAGE_VERSION=1.0.2

all : build_test/test_mixtures AntMAN.Rinstall/AntMAN/libs/AntMAN.so  AntMAN.pdf 

docker : Dockerfile
	mkdir -p docker_share
	sudo rm -rf docker_share/* 
	chcon -Rt svirt_sandbox_file_t  docker_share/
	cp -rf AntMAN Makefile tests_cpp/ docker_share/
	sudo docker build -f Dockerfile.3.4.4 -t bbodin/antman344 .
	sudo docker run -v `pwd`/docker_share:/tmp/mixture bbodin/antman344 

infos :
	@echo "C_FILES=${C_FILES}"
	@echo "R_FILES=${R_FILES}"


check : AntMAN/src/RcppExports.cpp
	${R_CMD} -e  "devtools::check(\"AntMAN\");"

%/NAMESPACE :  %/DESCRIPTION
	rm -f $*/man/* %_${PACKAGE_VERSION}.tar.gz 
	rm -rf $*.Rinstall 
	echo "# Generated by roxygen2: do not edit by hand" > $*/NAMESPACE
	${R_CMD} -e  "library(devtools) ; document(\"$*\");"
	find $*/man/ -type f -exec sed -i 's/[\][\][\]%/\\%/gI' {} \;

%/src/RcppExports.cpp  %/R/RcppExports.R : %/NAMESPACE ${C_FILES} ${H_FILES} ${R_FILES}
	rm -f $*/src/RcppExports.cpp  $*/R/RcppExports.R
	${R_CMD} -e  "Rcpp::compileAttributes(pkgdir = \"$*\" , verbose=TRUE);"


%_${PACKAGE_VERSION}.tar.gz : ${H_FILES} ${C_FILES} ${R_FILES} %/src/RcppExports.cpp  %/R/RcppExports.R  
	rm -rf AntMAN/src/*.o ./AntMAN/src/*.so 
	R CMD build ./$*

%.Rinstall/AntMAN/libs/AntMAN.so : %_${PACKAGE_VERSION}.tar.gz 
	mkdir -p $*.Rinstall
	rm -rf $*.Rinstall/* 
	R CMD INSTALL  -l $*.Rinstall $<

%_${PACKAGE_VERSION}.pdf : %/NAMESPACE
	${R_CMD} -e  "library(devtools) ; devtools::build_manual(\"$*\"); " || ${R_CMD} -e  "library(devtools) ; devtools::check(\"$*\",manual=TRUE); " || touch $@

%.pdf : %/NAMESPACE
	R CMD Rd2pdf $* --no-preview --force --no-clean

build_test/Makefile :  ${H_FILES} ${C_FILES} CMakeLists.txt
	rm -rf build_test 
	mkdir -p build_test
	cd build_test && cmake .. 
build_test/test_mixtures : build_test/Makefile
	+make -C build_test 
test : build_test/Makefile
	+make -C build_test CTEST_OUTPUT_ON_FAILURE=1 all test

deps :
	for f in devtools Rdpack salso mvtnorm mcclust GGally bayesplot RcppArmadillo dendextend ggdendro jpeg magrittr stringr ; do echo $$f ; R -q -e "install.packages(\"$$f\",repos = \"http://cran.us.r-project.org\");"; done

clean : 
	rm -rf build_test/ current *~ *.Rinstall *.pdf  *.tar.gz *.Rcheck ./AntMAN/NAMESPACE ./AntMAN/src/*.o ./AntMAN/src/*.so 	./AntMAN/src/*.rds ./AntMAN/src/RcppExports.cpp  ./AntMAN/R/RcppExports.R  ./AntMAN/man/*.Rd .Rd2pdf*
.PHONY: clean test
.SECONDARY:
