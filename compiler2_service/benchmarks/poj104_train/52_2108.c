#define NUM_ITER 55516

#include <header.h>

int main_bench()
{
  int m,n,i;
  int a[100];
  int *p,*p1;
  p=a;
  my_scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
{
   my_scanf("%d",p++);
   }
   p1=&a[n-m];
 for(i=n-m;i<n;i++,p1++)
{
my_printf("%d ",*p1);
}
 p=a;
for(i=0;i<n-m-1;i++,p++)
{
my_printf("%d ",*p);
}
my_printf("%d",*p);
}