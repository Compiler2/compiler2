#define NUM_ITER 55882

#include <header.h>


int main_bench()
{
    int n,i;
    my_scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    my_scanf("%d",&a[i-1]);
    for(i=n-1;i>=1;i--)
    my_printf("%d ",a[i]);
    my_printf("%d",a[0]);
    	
    return 0;
}
