#define NUM_ITER 5737

#include <header.h>

int main_bench()
{
  int n;
  my_scanf("%d",&n);
  int a[300];
  int i;
  for(i=0;i<300;i++)
  {
    a[i]=0;
  }
  int *p;
  for(p=a;p<a+n;p++)
  {
    my_scanf("%d ",p);
  }
  p=a;
  int *q;
  for(;p<a+n-1;p++)
  {
    for(q=p+1;q<a+n;q++)
    {
      if(*q==*p) *q=0;
     }
   }
  p=a;
 my_printf("%d",*p);
  for(p=p+1;p<a+300;p++)
  {
    if(*p!=0)
    my_printf(",%d",*p);
  }
return 0;
}
    