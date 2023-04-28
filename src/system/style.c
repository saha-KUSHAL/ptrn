#include "system.h"
#include <string.h>
char *style(int argc,char *argv[]){
  int i,count =0;
  char style[10];
  for(i=0;i<argc;i++){
    if(strcmp(argv[i],"vertical")==0){
      strcpy(style,argv[i]);
      count ++;
    }
    else if(strcmp(argv[i],"inverted")==0){
      strcpy(style,argv[i]);
      count++;
    }
    else
      return "no shape";
  }
  if(count >1)
    return "Too Many Arguments";
  else
    return shape;
}
