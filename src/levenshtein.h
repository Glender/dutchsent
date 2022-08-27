#include <Rcpp.h>
#ifndef LEVENSHTEIN_H
#define LEVENSHTEIN_H

// https://knausb.github.io/2017/08/header-files-in-rcpp/
Rcpp::List most_similar_levenstein(
    Rcpp::CharacterVector strings,
    Rcpp::CharacterVector targets
);

#endif
