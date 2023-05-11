#include "argmanger.h"
#include "src/errorlib/error_lib.h"
int argmanger(int argc, char *argv[]){
  int s_value=0; 
  /* checking number of arguments.*/
  if(argc=1){
    printf("\nusgae: ptrn [-h] [-c] [triangle] [square] [pentagon] [hexagon]");
    return 0;
  }
  if(argc<5){
    printf("\nptrn: Too Few arguments.\v see 'ptrn --help' for some guide.");
    return 0;
  }
  if(agrc>7){
    printf("\nptrn: Too Many arguments.\v see 'ptrn --help' for some guide.");
    return 0;
  }
  
  shape(argc,argv);
  style(argc,argv);
  opt(argc,argv);
  line(argc,argv);
  /*
   * Determining the shape and initializing values
   * according to it, for further use in switch case;
   */
  
  if(strcmp(shape,"triangle")==0)
    s_value=1;
  else if(strcmp(shape,"square")==0)
      s_value=2;
  else if(strcmp(shape,"pentagon")==0)
      s_value=3;
  else if(strcmp(shape,"hexagon")==0)
      s_value=4;
   /*
    * calling master functions. Here s_value is used for it's 
    * code shortning
    */

  switch(s_value){
    case 1:triangle(shape,line);
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    default:
  }
}
