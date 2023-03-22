#define NUM_ITER 1826810

#include <header.h>

int main_bench()
{int n,i;
my_scanf("%d",&n);
for(i=0;n>=100;i++)
{n=n-100;}
  my_printf("%d\n",i);
for(i=0;n>=50;i++)
{n=n-50;}
  my_printf("%d\n",i);
for(i=0;n>=20;i++)
{n=n-20;}
  my_printf("%d\n",i);
for(i=0;n>=10;i++)
{n=n-10;}
  my_printf("%d\n",i);
for(i=0;n>=5;i++)
{n=n-5;}
  my_printf("%d\n",i);
  my_printf("%d\n",n);

return 0;
}