#define NUM_ITER 45451

#include <header.h>

int main_bench()
{
    int i=0,n,j,k,s=0;
    my_scanf("%d",&n);
    int a[100000];
    for(i;i<n;i++)
    {
        my_scanf("%d",&a[i]);
    }
    my_scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            for(j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }
            n--;
            i--;
            s++;
        }
    }
    for(i=0;i<n;i++)
    {
        my_printf("%d",a[i]);
        if(i!=n-1)
        my_printf(" ");
    }
    
    return 0;
}

