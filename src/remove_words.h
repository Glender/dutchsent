#include <Rcpp.h>
#ifndef REMOVE_WORDS_H
#define REMOVE_WORDS_H

using namespace Rcpp;
CharacterVector remove_words(CharacterVector words, CharacterVector word_list);

#endif
