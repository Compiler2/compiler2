#include <header.h>

int main_bench()
{
   int m,n,i,t,a[200];
   my_scanf("%d %d",&n,&m);
   for(i=1;i<=n;i++)
   my_scanf("%d",&a[i]);
   for(i=n+1;i<=n+n;i++)
   a[i]=a[i-n];
   for(i=n-m+1;i<=(n+n-m-1);i++)
   my_printf("%d ",a[i]);
   my_printf("%d",a[n+n-m]);
}
   
