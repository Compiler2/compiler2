#define NUM_ITER 52349

#include <header.h>

int main_bench()
{
    int i,n,a[300]={0},flag[300]={0},p=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
                    p++;
                    flag[a[i]]++;
                    if(flag[a[i]]==1&&p==1)
                    {my_printf("%d",a[i]);}
                    else if(flag[a[i]]==1&&p>1)
                    {my_printf(",%d",a[i]);}
                    else
                    continue;
    }
    return(0);
}
                                  
