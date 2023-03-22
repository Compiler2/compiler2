#include <header.h>

int main_bench()
{
  int n,a,b,c;
  my_scanf("%d",&n);
  a=n%3;
  b=n%5;
  c=n%7;
  if (a==0&&b==0)
  {
    my_printf("3 5");
    if (c==0)
      my_printf(" 7");
  }
  if (a==0&&b!=0)
  {
    my_printf("3");
    if (c==0)
      my_printf(" 7");
  }
  if (a!=0&&b==0)
  {
    my_printf("5");
    if (c==0)
      my_printf(" 7");
  }
  if (a!=0&&b!=0)
  {
    if (c==0)
      my_printf("7");
    else
      my_printf("n");
  }
}
