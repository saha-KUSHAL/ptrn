#include <stdio.h>
#include "triangle.h"

void t_default(int line){
  int i,j,limit1=line,limit2=line-1;
  for(i=0;i<line;i++){
    for(j=0;j<limit1;j++){
      if(j<limit2)
        printf(" ");
      else
        printf("*");
    }
    printf("\n");
    limit1++;
    limit2--;
  }
}
