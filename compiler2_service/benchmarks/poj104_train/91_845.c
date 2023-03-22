#include <header.h>

int main_bench()
{ char *p1,*p2,a[100];
  int n,i;
  gets(a);
  n=strlen(a);
  p1=&a[0];
  p2=&a[1];
  for (i=0;i<=(n-2);i++)
    {my_printf("%c",*p1+*p2);p1++;p2++;}
  p1=&a[0];p2=&a[n-1];
  my_printf("%c",*p1+*p2);


}