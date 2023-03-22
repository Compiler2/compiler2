#define NUM_ITER 5044

#include <header.h>

int main_bench()
{
    int a[20000],n,i,j;
    my_scanf("%d",&n);
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
            {j=i;}
            else
            {j=j;}

        }
        if(j==i)
        my_printf(",%d",a[i]);
    }
    return 0;
}