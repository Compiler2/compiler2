#define NUM_ITER 54961

#include <header.h>

int main_bench()
{
   int n,a[100],t,*p=a,*q;
   my_scanf("%d",&n);
   for(;p<a+n;p++)
   my_scanf("%d",p);
p=a;q=a+n-1;
for(;p<q;p++,q--)
{  t=*p;
  *p=*q;
*q=t;}
for(p=a;p<a+n-1;p++)
my_printf("%d ",*p);
my_printf("%d",*p);
}


  