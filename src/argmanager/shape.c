#include "system.h"
#include <string.h>
#include "argmanager.h"
#include "errorlib/error_arg.h"
/*
* Checking the full argv array and if match is found, then store it in header
* and mark the matched position in loc_arr array.
* The count counter checks if there is multiple shapes, in that case  an
* error will be triggered.
*/
int shape(int argc, char *argv[]){
  int i,count=0;
  char temp_shape[20];
  for(i=1;i<argc;i++){
    if(strcmp(argv[i],"triangle")==0){
      strcpy(temp_shape,argv[i]);
      count++;
    }
    else if(strcmp(argv[i],"square")==0){
      strcpy(temp_shape,argv[i]);
      count++;
    }
    else if(strcmp(argv[i],"pentagon")==0){
      strcpy(temp_shape,argv[i]);
      count++;
    }
    else if(strcmp(argv[i],"hexagon")==0){
      strcpy(temp_shape,argv[i]);
      count++;
    }
    else
      return ERROR_NO_SHAPE;
  }
  if(count >1)
    return ERROR_MULTIPLE_SHAPE;
  else{
    loc_arr[0]=i;
    opt_check=1;
    strcpy(shape,temp_shape);
    return ERROR_SUCESS;
  }
}
