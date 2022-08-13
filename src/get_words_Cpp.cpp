#include <Rcpp.h>

using namespace Rcpp;

// Code inspired by:
// https://teuder.github.io/rcpp4everyone_en/280_environment.html#creating-environment-object
// And:
// https://teuder.github.io/rcpp4everyone_en/230_R_function.html

//' @title C++ wrapper around main fun in get_words.R
//' @description Function extracts words from text.
//' @param str Character. For example, a sentence like "Mijn naam is Gerard. Ik ben een goochelaar".
//' @return Character Vector.
//'
// [[Rcpp::export]]
Rcpp::CharacterVector get_words_Cpp(std::string str) {

  // Obtaining namespace of our package
  Environment pkg = Environment::namespace_env("dutchsent");

  // Picking up get_words() function from the package
  Function f = pkg["get_words"];

  // executing function
  return f(str);
}
