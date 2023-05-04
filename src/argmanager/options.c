#include "system.h"
#include <string.h>
char *options(int argc,char *argv[]){
  int i,pos_h=-1,pos_c=-1;
  /* if there are multiple same options, it will be treated as one.
  if there are multiple distinct options, then it will be stored in a char array
  with contigueous locations. */
  if(opt_check==1){
   for(i=1;i<argc;i++){
      if(i==loc_arr[0] || i==loc_arr[1])
        continue;
      if(strcmp(argv[i],"-h")==0){
        opt[0]='h';
        pos_h=1;
      }
      else if(strcmp(argv[i],"-c")==0){
        opt[1]='c';
        pos_c=i;
      }
    }
  }
  opts[2]='\0';
  loc_arr[2]=pos_c;
  loc_arr[3]=pos_h;
  return "Success";
}
