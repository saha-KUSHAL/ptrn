#include "error_arg.h"

const char * argument_error(int error)
{
  switch(error){
    case ERROR_NO_ARGUMENT:
      return "No Argument";
    case ERROR_FEW_ARGUMENT:
      return "Too Few Argument";
    case ERROR_MANY_ARGUMENT:
      return "Too Many Argument";
    case ERROR_NO_SHAPE:
      return "No Shape Specified";
    case ERROR_MULTIPLE_SHAPE:
      return "Multiple Shape detected";
    case ERROR_NO_STYLE:
      return "No Style Specified";
    case ERROR_MULTIPLE_STYLE:
      return "Multiple Style Detected";
    case ERROR_INVALID_OPTIONS:
      return "Supported options are -c and -h";
    case ERROR_NO_LINE:
      return "Specify No of lines";
    case ERROR_MULTIPLE_LINES:
      return "Multiple Lines detected";
    case ERROR_MAX_LINE_LIMIT:
      return "Lines can't be more than 100";
    case ERROR_INVALID_ARGUMENT:
      return "Invalid Arguments";
    default:
      return "Unknown Error"; 
  }
}
