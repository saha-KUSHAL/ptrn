#include "error_shape.h"

const char * shape_error(int error)
{
  switch(error)
  {
    case 1:
      return "Multiple Shapes";
    case 2:
      return "No Shape Found";
    default:
    return "Unknown Error in shape";
  }
}
