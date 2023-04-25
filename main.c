#include <string.h>
#include "src/triangle/triangle.h"
#include <stdlib.h>
int main(int argc, char *argv[]){
  if(strcmp(argv[1],"triangle")==0){
    if(strcmp(argv[2],"vertical")==0)
      triangle("vertical",atoi(argv[3]));
    if(strcmp(argv[2],"default")==0)
      triangle("default",atoi(argv[3]));
  }
  return 0;
}

