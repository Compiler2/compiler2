#define NUM_ITER 11002

#include <header.h>

int main_bench()
{
    int i,j,n,k;
    int a[10000];
    my_scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
                    my_scanf("%d",&a[i]);
                    if(i==0)
                    my_printf("%d",a[i]);
                    else
                    {
                     k=0;
                    for(j=0;j<i;j++)
                    {
                                    if(a[i]==a[j])
                                    {
                                                  k=1;
                                    }
                    }
                    if(k==0)
                    my_printf(" %d",a[i]); 
                    }
    }
    return 0;
}                    
