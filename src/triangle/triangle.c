#include<string.h>
#include"triangle.h"
int triangle(char syl[],int line){
  if(strcmp(syl,"default")==0)
    t_default(line);
  else if (strcmp(syl,"vertical")==0)
    t_vertical(line);
  else
    return 0;
  return 1;
}
