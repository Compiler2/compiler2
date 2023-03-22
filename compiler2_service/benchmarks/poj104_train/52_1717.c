#define NUM_ITER 55447

#include <header.h>



int main_bench()
{
    int i,n,m,a[100],*p;
    my_scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
    if (i-m>=0)
    {
    my_printf("%d",*(a+i-m))   ;
    if(i!=n-1)
    {
    my_printf(" ")  ;
    }
    continue;
    }
        my_printf("%d ",*(a+n-m+i));

    }



    
    return 0;
}
