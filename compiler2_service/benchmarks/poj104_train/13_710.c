#define NUM_ITER 5978

#include <header.h>

int main_bench()
{
    int n,a[200000],i,b[200000],j=1,d=0;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
                     my_scanf("%d",&a[i]);
                     b[j]=a[i];
                     j++;
    }
                     my_printf("%d",b[1]);
    for(j=2;j<=n;j++)
    {
                     d=0;
                     for(i=1;i<=j-1;i++)
                     {
                                      if(b[j]==a[i])
                                      {d++;}
                     }
                     if(d==0)
                     my_printf(" %d",b[j]);
    }
    getchar();
    getchar();
    getchar();
}