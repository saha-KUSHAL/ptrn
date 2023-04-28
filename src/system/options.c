#include "system.h"
#include <string.h>
char *options(int argc,char *argv[]){
  int i;
  char opts[3];
  /* if there are multiple same options, it will be treated as one.
  if there are multiple distinct options, then it will be stored in a char array
  with contigueous locations. */
  for(i=0;i<argc;i++){
    if(strcmp(argv[i],"-h")==0){
      opts[0]='h';
    }
    else if(strcmp(argv[i],"-c")==0){
      opts[1]='c';
    } else
      otps[0]='\0';
  }
  opts[3]='\0';
  return opts;
}
