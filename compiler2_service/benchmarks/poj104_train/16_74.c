#define NUM_ITER 1230133

#include <header.h>

int main_bench()
{
 int i=0;
 char str[10000];
 my_scanf("%s",str);
 while(str[i]!='\0')
  i++;
 for(i--;i>=0;i--)
 my_printf("%c",str[i]);
 my_printf("\n");
 getchar();
 getchar();
 getchar();
 getchar();
}