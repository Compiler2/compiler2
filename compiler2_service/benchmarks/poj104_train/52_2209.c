#define NUM_ITER 58440

#include <header.h>

int main_bench()
{
    int n,m ,i,j;
    my_scanf ("%d%d",&n,&m);
    int a[100];
    for (i=0;i<n;i++)
    my_scanf ("%d",&a[i]);
    int *p;
    p=a;
    for (i=1;i<(n-m+1);i++)
    p++;
    for (i=0;i<m;i++)
    {
    my_printf ("%d ",*p);
    p++;}
    p=a;
    for (i=0;i<n-m-1;i++)
    {my_printf("%d ",*p);
    p++;}
my_printf("%d",*p);
}

