#' list_processes
#'
#' @description
#' List processes
#'
#' @param ... Arguments based on to \code{list.files}.
#' 
#' @details
#' List all sub-processes and Rcpp functions that are included in the package.
#'
#' @return void
#'
#' @examples
#' list_processes()
#'
#' @aliases list_processes
#' @rdname list_processes
#'
#' @export
list_processes <- function(...) {
  
  files <- sort(list.files("src/", pattern = "\\.cpp$"))
  
  print(files[files != "RcppExports.cpp"])
  
}
