#define NUM_ITER 6675

#include <header.h>

int main_bench()
{
    int i,j,k,n,l,sum;
    int a[100001];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    my_scanf("%d",&a[i]);
    }
    my_scanf("%d",&k);
    sum=0;
    for(i=0;i<n;i++)
    {
                    if(a[i]==k)
                    {
                               sum++;
                    }
    }
    for(i=0;i<n;i++)
    {
                    for(j=1;j<=100;j++)
                    {
                                         if(a[i]==k)
                                         {
                                                    for(l=i;l<n-1;l++)
                                                    {
                                                                    a[l]=a[l+1];
                                                    }
                                         }
                    }
    }
    if(a[0]!=k)
    {
               my_printf("%d",a[0]);
    }
    for(i=1;i<n-sum;i++)
    {
                       my_printf(" %d",a[i]);
    }
    return 0;
}