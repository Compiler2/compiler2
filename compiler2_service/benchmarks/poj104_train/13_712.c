#define NUM_ITER 7769

#include <header.h>

int main_bench()
{
    int n,i,j,k,b,t;
    int a[20000];
    my_scanf("%d",&n);
    k=0;
    for (i=0;i<n;i++)
    {
        j=1;
        my_scanf("%d",&b);
        for (t=0;t<k;t++)
        {
            if (b==a[t])
               j=0;
        }
        if (j==1)
        {
            a[k]=b;
            k++;
            if (k==1)
               my_printf("%d",b);
            else
               my_printf(" %d",b);
        }
    }
    getchar();
    getchar();
}