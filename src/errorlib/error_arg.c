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
    default:
      return "Unknown Error"; 
  }
}
