#include "system.h"
#include <string.h>
#include <stdlib.h>
#define MAX_OPT 2

int opt(int argc,char *argv[],char *opt[],char *pat[],char *syl[],int arg){
  int i,j=0;
  //checking first 2 contents of the argv array to determine the options.
  //found options will be stored at the array passed to opt parameter.
  opt[0]= NULL; //intializing the opt array as NULL that will be the default value if 
                //if no options is found
  if(argc >=2){
   for(i=1;i<= MAX_OPT;i++){
     if(strcmp(argv[i],"-c")==0){
        opt[j]='c';
        j++;
      }
     else if(strcmp(argv[i],"-h")==0){
        opt[j]='h';
        j++;
      }
    }
  }
  else
    return -1; //(not enough arguments)

  if(j!=argc)
    stcpy(pat[0],argv[j+1]); //passed pattern name is the first string after the options end.
  else
    return -2; //(no pattern)
  if(j!=argc)
  strcpy(syl[0],argv[j+1]); //passed pattern style is the first string after the pattern name end.
  else
    return -3; //no style defined
  if((j+1)==argc)
    arg=atoi(argv[argc]); //last content of the string is the no of lines.
  else
    return -4; //error no 2 (no number of lines)
}
