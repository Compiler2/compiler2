#define NUM_ITER 1235931

#include <header.h>


int main_bench()
{
  char str[101]={' '};
  int i;
  gets(str);
  for(i=0;i<strlen(str);i++)
{
                   if(str[i]==' '&&str[i+1]!=' ')
                   my_printf("%c",str[i]);
                   else if(str[i]!=' ')
                   my_printf("%c",str[i]);
}
                   
  
  return 0;
}