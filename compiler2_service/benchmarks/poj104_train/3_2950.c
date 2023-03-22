#define NUM_ITER 11013

#include <header.h>

int main_bench()
{
    int n,k,i,j,a[10000],flag;
    my_scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    for(i=0,flag=0;i<n;i++)
    for(j=i;j<n;j++)
    {
                    if(a[i]+a[j]==k)
                    flag=1;
    }
    if(flag==1)
    my_printf("yes");
    else
    my_printf("no");
    return 0;
}                
