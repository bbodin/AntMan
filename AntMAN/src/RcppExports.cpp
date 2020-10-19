// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// IAM_mcmc_fit
Rcpp::List IAM_mcmc_fit(Rcpp::RObject y, /* Not optional */ 		Rcpp::List mix_kernel_hyperparams, /* Not optional */ 		Rcpp::IntegerVector initial_clustering, bool fixed_clustering, Rcpp::List mix_components_prior, Rcpp::List mix_weight_prior, Rcpp::List mcmc_parameters);
RcppExport SEXP _AntMAN_IAM_mcmc_fit(SEXP ySEXP, SEXP mix_kernel_hyperparamsSEXP, SEXP initial_clusteringSEXP, SEXP fixed_clusteringSEXP, SEXP mix_components_priorSEXP, SEXP mix_weight_priorSEXP, SEXP mcmc_parametersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type y(ySEXP);
    Rcpp::traits::input_parameter< /* Not optional */ 		Rcpp::List >::type mix_kernel_hyperparams(mix_kernel_hyperparamsSEXP);
    Rcpp::traits::input_parameter< /* Not optional */ 		Rcpp::IntegerVector >::type initial_clustering(initial_clusteringSEXP);
    Rcpp::traits::input_parameter< bool >::type fixed_clustering(fixed_clusteringSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type mix_components_prior(mix_components_priorSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type mix_weight_prior(mix_weight_priorSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type mcmc_parameters(mcmc_parametersSEXP);
    rcpp_result_gen = Rcpp::wrap(IAM_mcmc_fit(y, mix_kernel_hyperparams, initial_clustering, fixed_clustering, mix_components_prior, mix_weight_prior, mcmc_parameters));
    return rcpp_result_gen;
END_RCPP
}
// compute_stirling
Rcpp::NumericVector compute_stirling(int n, double gamma);
RcppExport SEXP _AntMAN_compute_stirling(SEXP nSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_stirling(n, gamma));
    return rcpp_result_gen;
END_RCPP
}
// compute_stirling_ricor
Rcpp::NumericVector compute_stirling_ricor(unsigned int n, double gamma);
RcppExport SEXP _AntMAN_compute_stirling_ricor(SEXP nSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_stirling_ricor(n, gamma));
    return rcpp_result_gen;
END_RCPP
}
// compute_stirling_ricor_abs
Rcpp::NumericVector compute_stirling_ricor_abs(unsigned int n, double gamma);
RcppExport SEXP _AntMAN_compute_stirling_ricor_abs(SEXP nSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_stirling_ricor_abs(n, gamma));
    return rcpp_result_gen;
END_RCPP
}
// compute_stirling_ricor_log
Rcpp::NumericVector compute_stirling_ricor_log(unsigned int n, double gamma);
RcppExport SEXP _AntMAN_compute_stirling_ricor_log(SEXP nSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_stirling_ricor_log(n, gamma));
    return rcpp_result_gen;
END_RCPP
}
// VnkPoisson
Rcpp::NumericVector VnkPoisson(unsigned int n, double Lambda, double gamma);
RcppExport SEXP _AntMAN_VnkPoisson(SEXP nSEXP, SEXP LambdaSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(VnkPoisson(n, Lambda, gamma));
    return rcpp_result_gen;
END_RCPP
}
// VnkNegBin
Rcpp::NumericVector VnkNegBin(unsigned int n, double r, double p, double gamma);
RcppExport SEXP _AntMAN_VnkNegBin(SEXP nSEXP, SEXP rSEXP, SEXP pSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(VnkNegBin(n, r, p, gamma));
    return rcpp_result_gen;
END_RCPP
}
// VnkDelta
Rcpp::NumericVector VnkDelta(unsigned int n, unsigned int Mstar, double gamma);
RcppExport SEXP _AntMAN_VnkDelta(SEXP nSEXP, SEXP MstarSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type Mstar(MstarSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(VnkDelta(n, Mstar, gamma));
    return rcpp_result_gen;
END_RCPP
}
// prior_K_Pois
Rcpp::NumericVector prior_K_Pois(unsigned int n, double gamma, double Lambda);
RcppExport SEXP _AntMAN_prior_K_Pois(SEXP nSEXP, SEXP gammaSEXP, SEXP LambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type Lambda(LambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(prior_K_Pois(n, gamma, Lambda));
    return rcpp_result_gen;
END_RCPP
}
// prior_K_NegBin
Rcpp::NumericVector prior_K_NegBin(unsigned int n, double gamma, double r, double p);
RcppExport SEXP _AntMAN_prior_K_NegBin(SEXP nSEXP, SEXP gammaSEXP, SEXP rSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(prior_K_NegBin(n, gamma, r, p));
    return rcpp_result_gen;
END_RCPP
}
// prior_K_Delta
Rcpp::NumericVector prior_K_Delta(const unsigned int n, const double gamma, const unsigned Mstar);
RcppExport SEXP _AntMAN_prior_K_Delta(SEXP nSEXP, SEXP gammaSEXP, SEXP MstarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const unsigned >::type Mstar(MstarSEXP);
    rcpp_result_gen = Rcpp::wrap(prior_K_Delta(n, gamma, Mstar));
    return rcpp_result_gen;
END_RCPP
}
// find_gamma_Pois
double find_gamma_Pois(const unsigned int n, const double Lambda, const double Kstar, double gam_min, double gam_max, const double tolerance, const unsigned int max_iter);
RcppExport SEXP _AntMAN_find_gamma_Pois(SEXP nSEXP, SEXP LambdaSEXP, SEXP KstarSEXP, SEXP gam_minSEXP, SEXP gam_maxSEXP, SEXP toleranceSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type Kstar(KstarSEXP);
    Rcpp::traits::input_parameter< double >::type gam_min(gam_minSEXP);
    Rcpp::traits::input_parameter< double >::type gam_max(gam_maxSEXP);
    Rcpp::traits::input_parameter< const double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(find_gamma_Pois(n, Lambda, Kstar, gam_min, gam_max, tolerance, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// find_gamma_NegBin
double find_gamma_NegBin(const unsigned int n, const double r, const double p, const double Kstar, double gam_min, double gam_max, const double tolerance, const unsigned int max_iter);
RcppExport SEXP _AntMAN_find_gamma_NegBin(SEXP nSEXP, SEXP rSEXP, SEXP pSEXP, SEXP KstarSEXP, SEXP gam_minSEXP, SEXP gam_maxSEXP, SEXP toleranceSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type r(rSEXP);
    Rcpp::traits::input_parameter< const double >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double >::type Kstar(KstarSEXP);
    Rcpp::traits::input_parameter< double >::type gam_min(gam_minSEXP);
    Rcpp::traits::input_parameter< double >::type gam_max(gam_maxSEXP);
    Rcpp::traits::input_parameter< const double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(find_gamma_NegBin(n, r, p, Kstar, gam_min, gam_max, tolerance, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// find_gamma_Delta
double find_gamma_Delta(const unsigned int n, const unsigned Mstar, const double Kstar, double gam_min, double gam_max, const double tolerance, const unsigned int max_iter);
RcppExport SEXP _AntMAN_find_gamma_Delta(SEXP nSEXP, SEXP MstarSEXP, SEXP KstarSEXP, SEXP gam_minSEXP, SEXP gam_maxSEXP, SEXP toleranceSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const unsigned >::type Mstar(MstarSEXP);
    Rcpp::traits::input_parameter< const double >::type Kstar(KstarSEXP);
    Rcpp::traits::input_parameter< double >::type gam_min(gam_minSEXP);
    Rcpp::traits::input_parameter< double >::type gam_max(gam_maxSEXP);
    Rcpp::traits::input_parameter< const double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(find_gamma_Delta(n, Mstar, Kstar, gam_min, gam_max, tolerance, max_iter));
    return rcpp_result_gen;
END_RCPP
}
