#define NUM_ITER 1202250

#include <header.h>

main_bench()
{
  char a[6];
  gets(a);
  int i,j;
  j=strlen(a);
  for(i=j-1;i>=0;i--)
  my_printf("%c",a[i]) ;
  getchar();
  getchar();    
}
