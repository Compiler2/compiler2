#include <header.h>

int main_bench()
{
    int n,max,lmax,b,i;
    int x[100];
    my_scanf("%d",&n);
    my_scanf("%d",&x[0]);
    max=x[0];
    lmax=x[0];
    for(i=2;i<=n;i++)
    {
    my_scanf("%d",&x[i-1]);
    b=x[i-1];
    if (b>max)
       {  
         if(max>lmax)
         {
           lmax=max;
         }
         max=b;
       }
    else if (b>lmax)
        {
         lmax=b;
         }
    }
   my_printf("%d\n%d\n",max,lmax);
      my_scanf("%d",&n);
      return 0;
} 