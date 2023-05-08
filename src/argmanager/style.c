#include "system.h"
#include <string.h>
#include "argmanager.h"
/* Same working principle as shape function, but in addition we will not check the
* position where the shape is found in argv array.
*/
int style(int argc,char *argv[]){
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
        return ERROR_NO_STYLE;
    }
  }
  if(count >1){
    opt_check=0;
    return ERROR_NO_STYLE;
  }
  else{
    opt_check =1;
    loc_arr[1]=pos;
    strcpy(style,temp_style);
    return ERROR_SUCCESS;
  }
}
