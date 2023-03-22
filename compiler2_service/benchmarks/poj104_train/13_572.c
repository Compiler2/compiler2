#define NUM_ITER 9860

#include <header.h>

int main_bench()
{
    int n,a[20000],i,j,b[100],t=1;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&a[i]);
        for(j=0;j<t;j++)
        if(a[i]==b[j]) break;
        if(j>=t)
         {
          b[t]=a[i];
          t++;
         }
    }
      for(j=1;j<t-1;j++)
      my_printf("%d ",b[j]);
      my_printf("%d",b[t-1]);
}
