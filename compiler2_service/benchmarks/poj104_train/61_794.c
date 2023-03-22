#define NUM_ITER 59012

#include <header.h>

int main_bench()
{
    int n,a[20],i,m;
    my_scanf("%d",&n);
    a[0]=1;
    a[1]=1;
    for(i=2;i<20;i++)
    {
                     a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++)
    {
                    my_scanf("%d",&m);
                    my_printf("%d\n",a[m-1]);
    }
    getchar();
    getchar();
}
