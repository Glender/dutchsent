#include <Rcpp.h>
#ifndef JW_H
#define JW_H

// https://knausb.github.io/2017/08/header-files-in-rcpp/
Rcpp::List most_similar_jw(std::vector< std::string > strings, std::vector< std::string > targets);

#endif
