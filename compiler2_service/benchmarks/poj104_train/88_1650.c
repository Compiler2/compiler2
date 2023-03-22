#define NUM_ITER 750805

#include <header.h>


void f(char *p)
{
     int i;
     for (i=0;i<=29;i++)
     {
     if ((*p)>='0'&&(*p)<='9')
     my_printf("%c",*p);
     else if (*(p+1)>='0'&&*(p+1)<='9')
     my_printf("\n");
     p++;
     }
}




int main_bench()
{
  char a[30];
  gets(a);
  char *p;
  p=a;
  f(p);	
  return 0;
}
