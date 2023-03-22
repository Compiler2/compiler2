#define NUM_ITER 50645

#include <header.h>

int main_bench()
{
   int m,n,i,a[100],b[100];
   my_scanf("%d%d",&n,&m);
   for(i=0;i<n;i++)
   {
      my_scanf("%d",&a[i]);
   }
   for(i=0;i<n-m;i++)
   {
      b[i+m]=a[i];
   }
   for(i=n-m;i<n;i++)
   {
      b[i-n+m]=a[i];
   }
   for(i=0;i<n-1;i++)
   {
      my_printf("%d ",b[i]);
   }
   my_printf("%d\n",b[n-1]);
}