#define NUM_ITER 36442

#include <header.h>

main_bench()
{
   int j[101]={0},a[20000],b[20000]={0},i,n,x=0,m=0;
   my_scanf("%d",&n);
   for(i=0;i<n;i++)my_scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   { if(j[a[i]]==0)
     {j[a[i]]=1;
      b[x]=a[i];x++;
     }
   }
   for(i=0;i<x-1;i++)
   my_printf("%d ",b[i]);
   my_printf("%d",b[i]);
}