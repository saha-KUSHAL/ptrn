#include<stdio.h>
#include"triangle.h"
void t_vertical(int line){
  int i,j,limit=0,con=(line-(line/2));
  for(i=0;i<line;i++){
    for(j=0;j<limit;j++)
      printf("* ");
    printf("\n");
    if(j!=con)
      limit++;
    else{
    limit--;
    con--;
    }
  }
}
