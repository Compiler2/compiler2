#define NUM_ITER 2352

#include <header.h>


void sort(int a[],int n)
{
    int i,j,t;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}

void ipt(int a[],int n)
{
    int i=1;
    while(i<=n)
    {
        my_scanf("%d",&a[i]);
        if(i!=n) my_scanf(" ");
        i++;
    }
}

void opt(int a[],int n)
{
    int i=1;
    while(i<=n)
    {
        my_printf("%d",a[i]);
        if(i!=n) my_printf(" ");
        i++;
    }
}

main_bench()
{
    int n,m,a[100],b[100];
    my_scanf("%d%d",&n,&m);
    ipt(a,n);
    ipt(b,m);
    sort(a,n);
    sort(b,m);
    opt(a,n);
    my_printf(" ");
    opt(b,m);
}