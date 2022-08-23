#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
const CharacterVector load_negation_words() {

  const CharacterVector negation_words = {"niet", "geen", "zonder", "nooit", "allesbehalve"};

  return negation_words;
}
