#include <header.h>

int main_bench()
{
   int n,m,i,a[100],*p,*q,*f;
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
   my_scanf("%d",&a[i]);
   p=a;q=a+n-1;f=a+n/2;
   for(p=a;p<f;p++,q--)
   {m=*p;*p=*q;*q=m;}
   for(i=0;i<n-1;i++)
   my_printf("%d ",a[i]);
   my_printf("%d",a[n-1]);
}