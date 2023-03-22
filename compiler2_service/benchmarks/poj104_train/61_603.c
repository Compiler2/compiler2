#define NUM_ITER 2847

#include <header.h>

int main_bench()
{
   int n,a,i,j;
   int c[10000],b[10000];
   c[0]=1;c[1]=1;
   my_scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      my_scanf("%d/n",&a);
      b[i-1]=a;
    }
    for(i=1;i<9999;i++)
    {
        c[i+1]=c[i]+c[i-1];
     }
    for(i=0;i<n;i++)
    {
       j=b[i];
       my_printf("%d\n",c[j-1]);
    }
    return 0;
}
   
   