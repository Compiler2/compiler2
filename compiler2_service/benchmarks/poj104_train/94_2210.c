#define NUM_ITER 17097

#include <header.h>

void sort (int a[],int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
        }
    }
}
int main_bench(){
    int a[500],b[500],n,i,j=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b[j]=a[i];j++;
        }
    }
    sort(b,j);
    for(i=0;i<j-1;i++)
    {
        my_printf("%d,",b[i]);
    }
    my_printf("%d",b[i]);
    return 0;
}