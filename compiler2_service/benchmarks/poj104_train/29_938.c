#define NUM_ITER 52219

#include <header.h>

int main_bench()
{
   int a[41];
   float t=0,b[40];
   int n,i,m;
   a[0]=1;
   a[1]=2;
   for(i=2;i<41;i++)
    a[i]=a[i-1]+a[i-2];
    for(i=0;i<40;i++)
      b[i]=(float)a[i+1]/a[i]+b[i-1];
      my_scanf("%d",&m);
    for(i=0;i<m;i++)
    {
    my_scanf("%d",&n);
    my_printf("%.3f\n",b[n-1]);
    } 
     return 0;
}