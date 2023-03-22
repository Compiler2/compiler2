#define NUM_ITER 784172

#include <header.h>

main_bench()
{
  int i;
  char a[30];
  gets(a);
  for(i=0;i<30;i++)
  {
    if(a[i]>=48&&a[i]<=57)
      my_printf("%c",a[i]);
    else
    {
      if(a[i-1]>=48&&a[i-1]<=57)
      my_printf("\n");
    }
  }
}