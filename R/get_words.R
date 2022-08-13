#' Finds words in a sentence.
#'
#' @param text Character
#'
#' @return Character Vector.
#' @export
get_words <- function(text) {
  words <- unlist(dutchsent::str_extract(text, pattern = "\\b[a-zA-Z\\\\'\\-]+\\b"))
  return(tolower(words))
}
