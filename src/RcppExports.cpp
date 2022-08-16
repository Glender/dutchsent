// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// LCSubStr
unsigned int LCSubStr(std::string X, std::string Y);
RcppExport SEXP _dutchsent_LCSubStr(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type X(XSEXP);
    Rcpp::traits::input_parameter< std::string >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(LCSubStr(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// LCS_ratio
double LCS_ratio(std::string s1, std::string s2);
RcppExport SEXP _dutchsent_LCS_ratio(SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    rcpp_result_gen = Rcpp::wrap(LCS_ratio(s1, s2));
    return rcpp_result_gen;
END_RCPP
}
// most_similar_LCS
List most_similar_LCS(std::vector< std::string > strings, std::vector< std::string > targets);
RcppExport SEXP _dutchsent_most_similar_LCS(SEXP stringsSEXP, SEXP targetsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type strings(stringsSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type targets(targetsSEXP);
    rcpp_result_gen = Rcpp::wrap(most_similar_LCS(strings, targets));
    return rcpp_result_gen;
END_RCPP
}
// damerau_levenshtein
int damerau_levenshtein(const std::string A, const std::string B);
RcppExport SEXP _dutchsent_damerau_levenshtein(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type A(ASEXP);
    Rcpp::traits::input_parameter< const std::string >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(damerau_levenshtein(A, B));
    return rcpp_result_gen;
END_RCPP
}
// damerau_levenshtein_ratio
double damerau_levenshtein_ratio(const std::string s1, const std::string s2);
RcppExport SEXP _dutchsent_damerau_levenshtein_ratio(SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< const std::string >::type s2(s2SEXP);
    rcpp_result_gen = Rcpp::wrap(damerau_levenshtein_ratio(s1, s2));
    return rcpp_result_gen;
END_RCPP
}
// most_similar_DL
List most_similar_DL(const std::vector< std::string > strings, const std::vector< std::string > targets);
RcppExport SEXP _dutchsent_most_similar_DL(SEXP stringsSEXP, SEXP targetsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector< std::string > >::type strings(stringsSEXP);
    Rcpp::traits::input_parameter< const std::vector< std::string > >::type targets(targetsSEXP);
    rcpp_result_gen = Rcpp::wrap(most_similar_DL(strings, targets));
    return rcpp_result_gen;
END_RCPP
}
// get_words_Cpp
Rcpp::CharacterVector get_words_Cpp(std::string str);
RcppExport SEXP _dutchsent_get_words_Cpp(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(get_words_Cpp(str));
    return rcpp_result_gen;
END_RCPP
}
// idx_lookup
Rcpp::IntegerVector idx_lookup(Rcpp::List list_of_edit_distances);
RcppExport SEXP _dutchsent_idx_lookup(SEXP list_of_edit_distancesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type list_of_edit_distances(list_of_edit_distancesSEXP);
    rcpp_result_gen = Rcpp::wrap(idx_lookup(list_of_edit_distances));
    return rcpp_result_gen;
END_RCPP
}
// jaro_distance
double jaro_distance(const std::string s1, const std::string s2);
RcppExport SEXP _dutchsent_jaro_distance(SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< const std::string >::type s2(s2SEXP);
    rcpp_result_gen = Rcpp::wrap(jaro_distance(s1, s2));
    return rcpp_result_gen;
END_RCPP
}
// most_similar_jaro
List most_similar_jaro(std::vector< std::string > strings, std::vector< std::string > targets);
RcppExport SEXP _dutchsent_most_similar_jaro(SEXP stringsSEXP, SEXP targetsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type strings(stringsSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type targets(targetsSEXP);
    rcpp_result_gen = Rcpp::wrap(most_similar_jaro(strings, targets));
    return rcpp_result_gen;
END_RCPP
}
// jaro_winkler_distance
double jaro_winkler_distance(std::string str1, std::string str2);
RcppExport SEXP _dutchsent_jaro_winkler_distance(SEXP str1SEXP, SEXP str2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type str1(str1SEXP);
    Rcpp::traits::input_parameter< std::string >::type str2(str2SEXP);
    rcpp_result_gen = Rcpp::wrap(jaro_winkler_distance(str1, str2));
    return rcpp_result_gen;
END_RCPP
}
// most_similar_jw
List most_similar_jw(std::vector< std::string > strings, std::vector< std::string > targets);
RcppExport SEXP _dutchsent_most_similar_jw(SEXP stringsSEXP, SEXP targetsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type strings(stringsSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type targets(targetsSEXP);
    rcpp_result_gen = Rcpp::wrap(most_similar_jw(strings, targets));
    return rcpp_result_gen;
END_RCPP
}
// levenstein_distance
unsigned int levenstein_distance(const std::string& s1, const std::string& s2);
RcppExport SEXP _dutchsent_levenstein_distance(SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< const std::string& >::type s2(s2SEXP);
    rcpp_result_gen = Rcpp::wrap(levenstein_distance(s1, s2));
    return rcpp_result_gen;
END_RCPP
}
// levenstein_ratio
double levenstein_ratio(std::string s1, std::string s2);
RcppExport SEXP _dutchsent_levenstein_ratio(SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    rcpp_result_gen = Rcpp::wrap(levenstein_ratio(s1, s2));
    return rcpp_result_gen;
END_RCPP
}
// most_similar_levenstein
List most_similar_levenstein(std::vector< std::string > strings, std::vector< std::string > targets);
RcppExport SEXP _dutchsent_most_similar_levenstein(SEXP stringsSEXP, SEXP targetsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type strings(stringsSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type targets(targetsSEXP);
    rcpp_result_gen = Rcpp::wrap(most_similar_levenstein(strings, targets));
    return rcpp_result_gen;
END_RCPP
}
// load_dict
Rcpp::DataFrame load_dict();
RcppExport SEXP _dutchsent_load_dict() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(load_dict());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dutchsent_LCSubStr", (DL_FUNC) &_dutchsent_LCSubStr, 2},
    {"_dutchsent_LCS_ratio", (DL_FUNC) &_dutchsent_LCS_ratio, 2},
    {"_dutchsent_most_similar_LCS", (DL_FUNC) &_dutchsent_most_similar_LCS, 2},
    {"_dutchsent_damerau_levenshtein", (DL_FUNC) &_dutchsent_damerau_levenshtein, 2},
    {"_dutchsent_damerau_levenshtein_ratio", (DL_FUNC) &_dutchsent_damerau_levenshtein_ratio, 2},
    {"_dutchsent_most_similar_DL", (DL_FUNC) &_dutchsent_most_similar_DL, 2},
    {"_dutchsent_get_words_Cpp", (DL_FUNC) &_dutchsent_get_words_Cpp, 1},
    {"_dutchsent_idx_lookup", (DL_FUNC) &_dutchsent_idx_lookup, 1},
    {"_dutchsent_jaro_distance", (DL_FUNC) &_dutchsent_jaro_distance, 2},
    {"_dutchsent_most_similar_jaro", (DL_FUNC) &_dutchsent_most_similar_jaro, 2},
    {"_dutchsent_jaro_winkler_distance", (DL_FUNC) &_dutchsent_jaro_winkler_distance, 2},
    {"_dutchsent_most_similar_jw", (DL_FUNC) &_dutchsent_most_similar_jw, 2},
    {"_dutchsent_levenstein_distance", (DL_FUNC) &_dutchsent_levenstein_distance, 2},
    {"_dutchsent_levenstein_ratio", (DL_FUNC) &_dutchsent_levenstein_ratio, 2},
    {"_dutchsent_most_similar_levenstein", (DL_FUNC) &_dutchsent_most_similar_levenstein, 2},
    {"_dutchsent_load_dict", (DL_FUNC) &_dutchsent_load_dict, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_dutchsent(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
