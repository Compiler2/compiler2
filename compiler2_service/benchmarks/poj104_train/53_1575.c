#define NUM_ITER 9025

#include <header.h>

int main_bench()
{
    int a[300]={0},t,j,s,i,n;
    my_scanf("%d",&n);
    s=0;
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&t);
        j=0;
        while(a[j]!=t&&j<s)
        j=j+1;
        if(j>=s)
        {a[s++]=t;}
    }
    my_printf("%d",a[0]);
    for(i=1;i<s;i++)
    my_printf(",%d",a[i]);
    return 0;
}
