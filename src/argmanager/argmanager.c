#include "argmanger.h"
int argmanger(){
  /* checking number of arguments.*/
  if(argc<5){
    printf("\nptrn: Too Few arguments.\v see 'ptrn --help' for some guide.");
    return 0;
  }
  if(agrc>7){
    printf("\nptrn: Too Many arguments.\v see 'ptrn --help' for some guide.");
    return 0;
  }
  
  shape();
  style();
  opt();
  line();
  /*
   * Determining the shape and initializing values
   * according to it, for further use in switch case;
   */
  int s_value=0;
  if(strcmp(shape,"triangle")==0)
    s_value=1;
  else if(strcmp(shape,"square")==0)
      s_value=2;
  else if(strcmp(shape,"pentagon")==0)
      s_value=3;
  else if(strcmp(shape,"hexagon")==0)
      s_value=4;
  sw
}
