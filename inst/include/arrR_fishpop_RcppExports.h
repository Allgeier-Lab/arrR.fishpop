// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_arrR_fishpop_RCPPEXPORTS_H_GEN_
#define RCPP_arrR_fishpop_RCPPEXPORTS_H_GEN_

#include <Rcpp.h>

namespace arrR_fishpop {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("arrR.fishpop", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("arrR.fishpop", "_arrR_fishpop_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in arrR.fishpop");
            }
        }
    }

    inline int rcpp_cell_from_xy(double x, double y, Rcpp::NumericVector extent, Rcpp::IntegerVector dimensions, bool rcpp) {
        typedef SEXP(*Ptr_rcpp_cell_from_xy)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_rcpp_cell_from_xy p_rcpp_cell_from_xy = NULL;
        if (p_rcpp_cell_from_xy == NULL) {
            validateSignature("int(*rcpp_cell_from_xy)(double,double,Rcpp::NumericVector,Rcpp::IntegerVector,bool)");
            p_rcpp_cell_from_xy = (Ptr_rcpp_cell_from_xy)R_GetCCallable("arrR.fishpop", "_arrR_fishpop_rcpp_cell_from_xy");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcpp_cell_from_xy(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(y)), Shield<SEXP>(Rcpp::wrap(extent)), Shield<SEXP>(Rcpp::wrap(dimensions)), Shield<SEXP>(Rcpp::wrap(rcpp)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<int >(rcpp_result_gen);
    }

}

#endif // RCPP_arrR_fishpop_RCPPEXPORTS_H_GEN_
