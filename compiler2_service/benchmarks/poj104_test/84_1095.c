#define NUM_ITER 62341

#include <header.h>

int main_bench()
{
 int n,i=1;
 int a,b=0,c=0;
 my_scanf("%d",&n);
 while(i<=n)
 {
  my_scanf("%d",&a);
  if(a>b)
   c=b,b=a;
  else
   if(a>c)
    c=a;
  i++;
 }
 my_printf("%d\n%d",b,c);
}