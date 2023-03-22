#define NUM_ITER 6235

#include <header.h>

int main_bench()
{
    int n,k=0;
    my_scanf("%d",&n);
    int i,j;
    int a[n];
    for(i=0;i<n;i++)
    my_scanf("%d", &a[i]);
    my_printf("%d",a[0]);
    for(i=1;i<n;i++)
    {for(j=0;j<i;j++) 
    {if(a[j]!=a[i]) 
    k++;}
    if(k==i)
    my_printf(" %d",a[i]);
    k=0;
    }
    getchar();
    getchar();
}