#define NUM_ITER 1296577

#include <header.h>

int main_bench()
{
  char a[7],i,j;
  my_scanf("%s",&a);
  for(i = 1; a[i] !='\0'; i++)
     j=i;

  for( i = j; i>=0; i--)
     my_printf("%c",a[i]);

  return 0;
}

  