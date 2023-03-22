#define NUM_ITER 5664

#include <header.h>

int main_bench()
{
    int n,a[10000],b;
    my_scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        my_scanf("%d",&b);
        a[1]=1;a[2]=1;
        for(int j=3;j<=b;j++)
        a[j]=a[j-1]+a[j-2];
        my_printf("%d\n",a[b]);
    }
    getchar();
    getchar();
    getchar();
    getchar();
}
