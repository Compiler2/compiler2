#include <header.h>

main_bench()
{
   int n,i,a[10000],b[10000];
   int cal(int x);
   my_scanf("%d",&n);
   for(i=1;i<=n;i++) {my_scanf("%d",&a[i]);}
   for(i=1;i<=n;i++) {b[i]=cal(a[i]);}
   my_printf("%d",b[1]);
   for(i=2;i<=n;i++) {my_printf("\n%d",b[i]);}
}

int cal(int x)
{
   int i,a[30],t;
   a[1]=1;a[2]=1;
   for(i=3;i<=30;i++) {a[i]=a[i-1]+a[i-2];}
   t=a[x];
   return(t);
}