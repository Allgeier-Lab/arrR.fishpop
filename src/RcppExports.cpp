// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_cell_from_xy
int rcpp_cell_from_xy(double x, double y, Rcpp::NumericVector extent, Rcpp::IntegerVector dimensions, bool rcpp);
static SEXP _arrR_fishpop_rcpp_cell_from_xy_try(SEXP xSEXP, SEXP ySEXP, SEXP extentSEXP, SEXP dimensionsSEXP, SEXP rcppSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type extent(extentSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type dimensions(dimensionsSEXP);
    Rcpp::traits::input_parameter< bool >::type rcpp(rcppSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_cell_from_xy(x, y, extent, dimensions, rcpp));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _arrR_fishpop_rcpp_cell_from_xy(SEXP xSEXP, SEXP ySEXP, SEXP extentSEXP, SEXP dimensionsSEXP, SEXP rcppSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_arrR_fishpop_rcpp_cell_from_xy_try(xSEXP, ySEXP, extentSEXP, dimensionsSEXP, rcppSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _arrR_fishpop_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("int(*rcpp_cell_from_xy)(double,double,Rcpp::NumericVector,Rcpp::IntegerVector,bool)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _arrR_fishpop_RcppExport_registerCCallable() { 
    R_RegisterCCallable("arrR.fishpop", "_arrR_fishpop_rcpp_cell_from_xy", (DL_FUNC)_arrR_fishpop_rcpp_cell_from_xy_try);
    R_RegisterCCallable("arrR.fishpop", "_arrR_fishpop_RcppExport_validate", (DL_FUNC)_arrR_fishpop_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_arrR_fishpop_rcpp_cell_from_xy", (DL_FUNC) &_arrR_fishpop_rcpp_cell_from_xy, 5},
    {"_arrR_fishpop_RcppExport_registerCCallable", (DL_FUNC) &_arrR_fishpop_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_arrR_fishpop(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}