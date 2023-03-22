#define NUM_ITER 10215

#include <header.h>

main_bench()
{
    int a[500]={0},b[500]={0},n,i,e=0,j,k;
    my_scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        my_scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]%2!=0)
        {
            b[e]=a[i];
            e++;
        }
    }
    for (i=0;i<e;i++)
    {
        for (j=0;j<e-1;j++)
        {
            if (b[j]>b[j+1])
            {
                k=b[j+1];
                b[j+1]=b[j];
                b[j]=k;
            }
        }
    }
    for (i=0;i<e-1;i++)
    {
        my_printf("%d,",b[i]);
    }
    my_printf("%d",b[e-1]);
}

