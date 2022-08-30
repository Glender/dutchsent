#include <Rcpp.h>
#ifndef ALGORITHMIC_SEARCH_H
#define ALGORITHMIC_SEARCH_H

Rcpp::IntegerVector algorithmic_search_dict(

    Rcpp::CharacterVector words,
    Rcpp::CharacterVector dict_words,
    Rcpp::IntegerVector dict_scores,
    unsigned int cutoff_levenstein,
    double cutoff_LCS
);

#endif









