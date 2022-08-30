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
// get_sentiment
CharacterVector get_sentiment(Rcpp::CharacterVector text);
RcppExport SEXP _dutchsent_get_sentiment(SEXP textSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type text(textSEXP);
    rcpp_result_gen = Rcpp::wrap(get_sentiment(text));
    return rcpp_result_gen;
END_RCPP
}
// get_words_Cpp
Rcpp::CharacterVector get_words_Cpp(Rcpp::CharacterVector str);
RcppExport SEXP _dutchsent_get_words_Cpp(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(get_words_Cpp(str));
    return rcpp_result_gen;
END_RCPP
}
// dict_idx_lookup
Rcpp::IntegerVector dict_idx_lookup(Rcpp::List list_of_edit_distances, Rcpp::CharacterVector words, Rcpp::CharacterVector dict_words, unsigned int cutoff_levenstein, double cutoff_LCS);
RcppExport SEXP _dutchsent_dict_idx_lookup(SEXP list_of_edit_distancesSEXP, SEXP wordsSEXP, SEXP dict_wordsSEXP, SEXP cutoff_levensteinSEXP, SEXP cutoff_LCSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type list_of_edit_distances(list_of_edit_distancesSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type words(wordsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dict_words(dict_wordsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type cutoff_levenstein(cutoff_levensteinSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff_LCS(cutoff_LCSSEXP);
    rcpp_result_gen = Rcpp::wrap(dict_idx_lookup(list_of_edit_distances, words, dict_words, cutoff_levenstein, cutoff_LCS));
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
// most_similar_levenstein
Rcpp::List most_similar_levenstein(Rcpp::CharacterVector strings, Rcpp::CharacterVector targets);
RcppExport SEXP _dutchsent_most_similar_levenstein(SEXP stringsSEXP, SEXP targetsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type strings(stringsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type targets(targetsSEXP);
    rcpp_result_gen = Rcpp::wrap(most_similar_levenstein(strings, targets));
    return rcpp_result_gen;
END_RCPP
}
// load_dict
const Rcpp::DataFrame load_dict();
RcppExport SEXP _dutchsent_load_dict() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(load_dict());
    return rcpp_result_gen;
END_RCPP
}
// load_negation_words
const CharacterVector load_negation_words();
RcppExport SEXP _dutchsent_load_negation_words() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(load_negation_words());
    return rcpp_result_gen;
END_RCPP
}
// load_stopwords
const CharacterVector load_stopwords();
RcppExport SEXP _dutchsent_load_stopwords() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(load_stopwords());
    return rcpp_result_gen;
END_RCPP
}
// dict_index
Rcpp::IntegerVector dict_index(Rcpp::CharacterVector words, Rcpp::CharacterVector dict_words, unsigned int cutoff_levenstein, double cutoff_LCS);
RcppExport SEXP _dutchsent_dict_index(SEXP wordsSEXP, SEXP dict_wordsSEXP, SEXP cutoff_levensteinSEXP, SEXP cutoff_LCSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type words(wordsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dict_words(dict_wordsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type cutoff_levenstein(cutoff_levensteinSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff_LCS(cutoff_LCSSEXP);
    rcpp_result_gen = Rcpp::wrap(dict_index(words, dict_words, cutoff_levenstein, cutoff_LCS));
    return rcpp_result_gen;
END_RCPP
}
// algorithmic_search_dict
Rcpp::IntegerVector algorithmic_search_dict(Rcpp::CharacterVector words, Rcpp::CharacterVector dict_words, Rcpp::IntegerVector dict_scores, unsigned int cutoff_levenstein, double cutoff_LCS);
RcppExport SEXP _dutchsent_algorithmic_search_dict(SEXP wordsSEXP, SEXP dict_wordsSEXP, SEXP dict_scoresSEXP, SEXP cutoff_levensteinSEXP, SEXP cutoff_LCSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type words(wordsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dict_words(dict_wordsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type dict_scores(dict_scoresSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type cutoff_levenstein(cutoff_levensteinSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff_LCS(cutoff_LCSSEXP);
    rcpp_result_gen = Rcpp::wrap(algorithmic_search_dict(words, dict_words, dict_scores, cutoff_levenstein, cutoff_LCS));
    return rcpp_result_gen;
END_RCPP
}
// most_similar_word
Rcpp::CharacterVector most_similar_word(Rcpp::CharacterVector words, Rcpp::CharacterVector dict_words, Rcpp::IntegerVector dict_scores, unsigned int cutoff_levenstein, double cutoff_LCS);
RcppExport SEXP _dutchsent_most_similar_word(SEXP wordsSEXP, SEXP dict_wordsSEXP, SEXP dict_scoresSEXP, SEXP cutoff_levensteinSEXP, SEXP cutoff_LCSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type words(wordsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dict_words(dict_wordsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type dict_scores(dict_scoresSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type cutoff_levenstein(cutoff_levensteinSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff_LCS(cutoff_LCSSEXP);
    rcpp_result_gen = Rcpp::wrap(most_similar_word(words, dict_words, dict_scores, cutoff_levenstein, cutoff_LCS));
    return rcpp_result_gen;
END_RCPP
}
// remove_words
CharacterVector remove_words(CharacterVector words, CharacterVector word_list);
RcppExport SEXP _dutchsent_remove_words(SEXP wordsSEXP, SEXP word_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type words(wordsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type word_list(word_listSEXP);
    rcpp_result_gen = Rcpp::wrap(remove_words(words, word_list));
    return rcpp_result_gen;
END_RCPP
}
// search_dict
IntegerVector search_dict(CharacterVector w, CharacterVector words, IntegerVector scores);
RcppExport SEXP _dutchsent_search_dict(SEXP wSEXP, SEXP wordsSEXP, SEXP scoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type words(wordsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type scores(scoresSEXP);
    rcpp_result_gen = Rcpp::wrap(search_dict(w, words, scores));
    return rcpp_result_gen;
END_RCPP
}
// str_contains
bool str_contains(CharacterVector words, CharacterVector word_list);
RcppExport SEXP _dutchsent_str_contains(SEXP wordsSEXP, SEXP word_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type words(wordsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type word_list(word_listSEXP);
    rcpp_result_gen = Rcpp::wrap(str_contains(words, word_list));
    return rcpp_result_gen;
END_RCPP
}
// to_lowercase
Rcpp::CharacterVector to_lowercase(Rcpp::CharacterVector str);
RcppExport SEXP _dutchsent_to_lowercase(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(to_lowercase(str));
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
    {"_dutchsent_get_sentiment", (DL_FUNC) &_dutchsent_get_sentiment, 1},
    {"_dutchsent_get_words_Cpp", (DL_FUNC) &_dutchsent_get_words_Cpp, 1},
    {"_dutchsent_dict_idx_lookup", (DL_FUNC) &_dutchsent_dict_idx_lookup, 5},
    {"_dutchsent_jaro_distance", (DL_FUNC) &_dutchsent_jaro_distance, 2},
    {"_dutchsent_most_similar_jaro", (DL_FUNC) &_dutchsent_most_similar_jaro, 2},
    {"_dutchsent_jaro_winkler_distance", (DL_FUNC) &_dutchsent_jaro_winkler_distance, 2},
    {"_dutchsent_most_similar_jw", (DL_FUNC) &_dutchsent_most_similar_jw, 2},
    {"_dutchsent_levenstein_distance", (DL_FUNC) &_dutchsent_levenstein_distance, 2},
    {"_dutchsent_most_similar_levenstein", (DL_FUNC) &_dutchsent_most_similar_levenstein, 2},
    {"_dutchsent_load_dict", (DL_FUNC) &_dutchsent_load_dict, 0},
    {"_dutchsent_load_negation_words", (DL_FUNC) &_dutchsent_load_negation_words, 0},
    {"_dutchsent_load_stopwords", (DL_FUNC) &_dutchsent_load_stopwords, 0},
    {"_dutchsent_dict_index", (DL_FUNC) &_dutchsent_dict_index, 4},
    {"_dutchsent_algorithmic_search_dict", (DL_FUNC) &_dutchsent_algorithmic_search_dict, 5},
    {"_dutchsent_most_similar_word", (DL_FUNC) &_dutchsent_most_similar_word, 5},
    {"_dutchsent_remove_words", (DL_FUNC) &_dutchsent_remove_words, 2},
    {"_dutchsent_search_dict", (DL_FUNC) &_dutchsent_search_dict, 3},
    {"_dutchsent_str_contains", (DL_FUNC) &_dutchsent_str_contains, 2},
    {"_dutchsent_to_lowercase", (DL_FUNC) &_dutchsent_to_lowercase, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_dutchsent(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
