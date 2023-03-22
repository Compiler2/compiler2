#include <header.h>

int main_bench()
{
    int n,a[20000],i,j,k=0;
    my_scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
                    
                    my_scanf("%d",&a[i]);
                    
    }
    my_printf("%d",a[0]);
    for(i=1;i<n;i++)
    {
                    for(j=0;j<i;j++)
                    {
                                    if(a[i]==a[j])
                                    k=k+1;
                    }
                    if(k==0)
                    my_printf(" %d",a[i]);
                    k=0;
                    
    }
    getchar();
    getchar();
}

