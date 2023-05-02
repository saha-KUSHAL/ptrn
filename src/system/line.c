#include "system.h"
#include <string.h>
#include <stdlib.h>
#include "argmanager.h"
int line(int argc,char *argv[]){
    int i;
  /* 
   * We will mark array subscripts of shape,style,options.
   * The left subscript location where the line is.
   * Convert the string to integer via atoi() and return it.
   */
  for(i=1;i<argc;i++){
    if(i==loc_arr[0] || i==loc_arr[1] || i==loc_arr[2])
      continue;
    line=(atoi(argv[i]));
  }
  return 1;
}
