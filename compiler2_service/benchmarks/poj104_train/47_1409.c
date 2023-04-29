#define NUM_ITER 54033

#include <header.h>

int main_bench()
{
   int n;
   my_scanf("%d",&n);
   int sz[n];
   for(int i=0;i<n;i++)
   {
     my_scanf("%d",&(sz[i]));
   }
   for(int j=n-1;j>=0;j--)
   {
    if(j==0)
     {
        my_printf("%d",sz[j]);
     }
    else
     {
        my_printf("%d ",sz[j]);
     }
   }
   return 0;
}
