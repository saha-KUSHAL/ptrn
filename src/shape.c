#include "system.h"
#include <string.h>
char * shape(int argc, char *argv[]){
  int i,count=0;
  char shape[20];
  for(i=0;i<argc;i++){
    if(strcmp(argv[i],"triangle")==0){
      strcpy(shape,argv[i]);
      count++;
    }
    else if(strcmp(argv[i],"square")==0){
      strcpy(shape,argv[i]);
      count++;
    }
    else if(strcmp(argv[i],"pentagon")==0){
      strcpy(shape,argv[i]);
      count++;
    }
    else if(strcmp(argv[i],"hexagon")==0){
      strcpy(shape,argv[i]);
      count++;
    }
    else
      return "No Shape";
  }
  if(count >1)
    return "Too many argument";
  else
    return shape;
}
