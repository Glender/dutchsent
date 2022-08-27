#include <Rcpp.h>
#ifndef IDX_LOOKUP_MIN_H
#define IDX_LOOKUP_MIN_H

// https://knausb.github.io/2017/08/header-files-in-rcpp/
Rcpp::IntegerVector idx_lookup_min(
    Rcpp::List list_of_edit_distances, unsigned int cutoff
);

#endif











