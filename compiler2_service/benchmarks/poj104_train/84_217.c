#define NUM_ITER 5110

#include <header.h>

int main_bench()
{
   int n,i,j,t,a[100];
   my_scanf("%d\n",&n);
   my_printf("\n");
   for(i=0;i<n;i++)
  {
     my_scanf("%d",&a[i]);
     my_printf("\n");
   }
   for(j=1;j<n;j++)
     for(i=0;i<(n-j);i++)
   if(a[i]<a[i+1])
     {
       t=a[i];
       a[i]=a[i+1];
       a[i+1]=t;
     }
     my_printf("%d\n%d\n",a[0],a[1]);
}
