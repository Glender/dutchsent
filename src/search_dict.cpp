#include <Rcpp.h>
#include "load_dict.h"

using namespace Rcpp;

//' @export
//'
// [[Rcpp::export]]
IntegerVector search_dict(CharacterVector v){

  // Move dict creation out of fun
  DataFrame dict = load_dict();

  CharacterVector words = dict["word"];
  IntegerVector scores = as<IntegerVector>(dict["score"]);

  //
  IntegerVector matches = match(v, words);
  matches = matches[ !is_na(matches) ];

  return scores[matches];
}
