#include <Rcpp.h>
#ifndef SEARCH_DICT_H
#define SEARCH_DICT_H

using namespace Rcpp;

IntegerVector search_dict(CharacterVector w, CharacterVector words, IntegerVector scores);

#endif
