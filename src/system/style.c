#include "system.h"
#include <string.h>
#include "argmanager.h"
char *style(int argc,char *argv[]){
  int i,count =0,pos;
  char temp_style[10];
  if(opt_check==1){
    for(i=1;i<argc;i++){
      if(i==loc_arr[0])
        continue;
      if(strcmp(argv[i],"vertical")==0){
        strcpy(temp_style,argv[i]);
        pos=i;
        count ++;
      }
      else if(strcmp(argv[i],"inverted")==0){
        strcpy(temp_style,argv[i]);
        pos=i;
        count++;
      }
     else
        return "no shape";
    }
  }
  if(count >1){
    return "Too Many Arguments";
    opt_check=0;
  }
  else{
    opt_check =1;
    loc_arr[1]=pos;
    strcpy(style,temp_style);
    return "Success";
  }
}
