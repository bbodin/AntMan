C_FILES := $(shell find ./AntMAN/src -name \*.\*pp -not -name RcppExports.cpp)
R_FILES := $(shell find ./AntMAN/R ./AntMAN/tests -name \*.R -not -name RcppExports.R)

R_CMD := R -q


all : AntMAN.Rinstall/AntMAN/libs/AntMAN.so  AntMAN/tests_cpp/testAntMAN  AntMAN_1.0.pdf 

docker : Dockerfile
	docker build -f Dockerfile -t bbodin/antman .

test :  AntMAN.Rinstall/AntMAN/libs/AntMAN.so  AntMAN/tests_cpp/testAntMAN  AntMAN_1.0.pdf
	${R_CMD} -f AntMAN/tests/testWordCount.R
	${R_CMD} -f AntMAN/tests/testGalaxy.R	
	${R_CMD} -f AntMAN/tests/testSegmentation.R
	${R_CMD} -f new_tutorial.R
	AntMAN/tests_cpp/testAntMAN

infos :
	@echo "C_FILES=${C_FILES}"
	@echo "R_FILES=${R_FILES}"

%/NAMESPACE : %/R/AntManAPI.R %/DESCRIPTION
	rm -f $*/NAMESPACE  $*/man/*
	${R_CMD} -e  "library(devtools) ; document(\"$*\");"

%/src/RcppExports.cpp  %/R/RcppExports.R : % %/NAMESPACE ${C_FILES} ${R_FILES}
	rm -f $*/src/RcppExports.cpp  $*/R/RcppExports.R
	${R_CMD} -e  "Rcpp::compileAttributes(pkgdir = \"$*\" , verbose=TRUE);"

%_1.0.tar.gz : ${C_FILES} ${R_FILES} %/src/RcppExports.cpp  %/R/RcppExports.R  AntMAN_1.0.pdf
	rm -rf AntMAN/src/*.o ./AntMAN/src/*.so 
	R CMD build ./$*

%.Rcheck/ : ${C_FILES} ${R_FILES} %/src/RcppExports.cpp  %/R/RcppExports.R  AntMAN_1.0.pdf
	R CMD check ./$*

%.Rinstall/AntMAN/libs/AntMAN.so : %_1.0.tar.gz 
	mkdir -p $*.Rinstall
	R CMD INSTALL  -l $*.Rinstall $*_1.0.tar.gz

%_1.0.pdf : %/NAMESPACE
	${R_CMD} -e  "library(devtools) ; devtools::build_manual(\"$*\"); " || touch $@

AntMAN/tests_cpp/testAntMAN :
	make -C AntMAN/tests_cpp/ testAntMAN

deps :
	echo "To be defined."

clean : 
	rm -rf current *~ *.Rinstall *_1.0.pdf  *_1.0.tar.gz *.Rcheck ./AntMAN/NAMESPACE ./AntMAN/src/*.o ./AntMAN/src/*.so 	./AntMAN/src/*.rds ./AntMAN/src/RcppExports.cpp  ./AntMAN/R/RcppExports.R  ./AntMAN/man/AM*.Rd 

.PHONY: clean
.SECONDARY:
