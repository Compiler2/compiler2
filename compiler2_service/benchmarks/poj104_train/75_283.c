#define NUM_ITER 34455

#include <header.h>

int main_bench()
{
    int a[1001],b[1001],x[1001],i,j,k,l,m=0,n;
    char c;
    c=','; 
    my_scanf("%d",&a[1]);
    i=2;
    while (my_scanf(",%d",&a[i])) i++;
    my_scanf("%d",&b[1]);
    i=2;
    while (my_scanf(",%d",&b[i])) i++;
    n=i-1;
    for (i=1;i<=n;i++)
        for (j=a[i];j<b[i];j++)
             x[j]++;
    l=0;
    for (i=0;i<=1000;i++)
        if (x[i]>l) l=x[i];
    my_printf("%d %d",n,l);
    my_scanf("%d",&i);
}
