#define NUM_ITER 172749

#include <header.h>

int main_bench()
{
char str[300][300];
int i=0,j=0,k=0;
for(i=0;i<300;i++)
 {
   my_scanf("%s",&str[i][0]);
   if(str[i-1][0]=='\0') break;
  }
for(;k<i-2;k++)
  my_printf("%d,",strlen(str[k]));
my_printf("%d",strlen(str[i-2]));
}