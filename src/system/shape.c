#include "system.h"
#include <string.h>
#include "argmanager.h"
char * shape(int argc, char *argv[]){
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
      return "No Shape";
  }
  if(count >1)
    return "Too many argument";
  else{
    loc_arr[0]=i;
    opt_check=1;
    strcpy(shape,temp_shape);
    return "Success";
  }
}
