#include <Rcpp.h>
#ifndef IDX_LOOKUP_H
#define IDX_LOOKUP_H

Rcpp::IntegerVector dict_idx_lookup(

    Rcpp::List list_of_edit_distances,
    Rcpp::CharacterVector words,
    Rcpp::CharacterVector dict_words,
    unsigned int cutoff_levenstein,
    double cutoff_LCS

);

#endif









