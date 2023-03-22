#define NUM_ITER 384243

#include <header.h>

int op(int x)
{
    int y=0;
    int a[10],i,j;
    for(i=0;x!=0;i++)
    {
        a[i]=x%10;
        x=x/10;
    }
    for(j=0;j<i;j++)
    {
        y=y+a[j];
        if(j!=i-1)y=y*10;
    }
    return y;
}
main_bench()
{
    int k,n;
    for(k=0;k<6;k++)
    {
        my_scanf("%d",&n);
        if(n<0)
        {
            n=0-n;
            my_printf("-%d",op(n));
        }
        else if(n==0)my_printf("0");
        else my_printf("%d",op(n));
        my_printf("\n");
    }
}
