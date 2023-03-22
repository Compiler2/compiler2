#include <header.h>


int main_bench()
{
  int n,m=0;
  my_scanf("%d",&n);
  if(n%7==0)
      m++;
  if(n%5==0)
      m+=10;
  if(n%3==0)
      m+=100;
  switch(m)
  {
      case 111: my_printf("3 5 7");break;
      case 11: my_printf("5 7");break;
      case 101: my_printf("3 7");break;
      case 110: my_printf("3 5");break;
      case 100: my_printf("3");break;
      case 10: my_printf("5");break;
      case 1: my_printf("7");break;
      case 0: my_printf("n");
  }

  return 0;
}
