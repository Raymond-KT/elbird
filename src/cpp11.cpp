// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"

// code.cpp
const char* kiwi_version();
extern "C" SEXP _Elbird_kiwi_version() {
  BEGIN_CPP11
    return cpp11::as_sexp(kiwi_version());
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _Elbird_kiwi_version();

static const R_CallMethodDef CallEntries[] = {
    {"_Elbird_kiwi_version", (DL_FUNC) &_Elbird_kiwi_version, 0},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_Elbird(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
