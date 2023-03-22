#define NUM_ITER 48189

#include <header.h>

main_bench()
{
    int a[101],i,n,c=0;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        my_scanf("%d",&a[i]);
        c++;
        }
    int b[101];
    b[1]=1;
    b[2]=1;
    for(i=3;i<=100;i++)
    {
        b[i]=b[i-1]+b[i-2];

        }
    for(i=1;i<=c;i++)
    {
        my_printf("%d\n",b[a[i]]);
        }
    }
