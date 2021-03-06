// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// XXinv
arma::mat XXinv(arma::cube X);
RcppExport SEXP gsynth_XXinv(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(XXinv(X));
    return rcpp_result_gen;
END_RCPP
}
// panel_est
arma::mat panel_est(arma::cube X, arma::mat Y, arma::mat MF);
RcppExport SEXP gsynth_panel_est(SEXP XSEXP, SEXP YSEXP, SEXP MFSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type MF(MFSEXP);
    rcpp_result_gen = Rcpp::wrap(panel_est(X, Y, MF));
    return rcpp_result_gen;
END_RCPP
}
// panel_beta
arma::mat panel_beta(arma::cube X, arma::mat xxinv, arma::mat Y, arma::mat F, arma::mat L);
RcppExport SEXP gsynth_panel_beta(SEXP XSEXP, SEXP xxinvSEXP, SEXP YSEXP, SEXP FSEXP, SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xxinv(xxinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(panel_beta(X, xxinv, Y, F, L));
    return rcpp_result_gen;
END_RCPP
}
// panel_factor
List panel_factor(arma::mat E, int r);
RcppExport SEXP gsynth_panel_factor(SEXP ESEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type E(ESEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(panel_factor(E, r));
    return rcpp_result_gen;
END_RCPP
}
// beta_iter
List beta_iter(arma::cube X, arma::mat xxinv, arma::mat Y, int r, double tolerate, arma::mat beta0);
RcppExport SEXP gsynth_beta_iter(SEXP XSEXP, SEXP xxinvSEXP, SEXP YSEXP, SEXP rSEXP, SEXP tolerateSEXP, SEXP beta0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xxinv(xxinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type tolerate(tolerateSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta0(beta0SEXP);
    rcpp_result_gen = Rcpp::wrap(beta_iter(X, xxinv, Y, r, tolerate, beta0));
    return rcpp_result_gen;
END_RCPP
}
// inter_fe
List inter_fe(arma::mat Y, arma::cube X, int r, int force, arma::mat beta0, double tol);
RcppExport SEXP gsynth_inter_fe(SEXP YSEXP, SEXP XSEXP, SEXP rSEXP, SEXP forceSEXP, SEXP beta0SEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(inter_fe(Y, X, r, force, beta0, tol));
    return rcpp_result_gen;
END_RCPP
}
