#define NUM_ITER 12470

#include <header.h>

int main_bench()
{
    int i,j,s,n;
    my_scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    my_scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
    if(i==0)
    {my_printf("%d",a[0]);}
    else
    {                
    for(j=0;j<=i-1;j++)
    {
    if(a[j]==a[i])
    {
    a[i]=0;
    break;
    }
    }
    if(a[i])
    {my_printf(" %d",a[i]);}
    }
    }
my_printf("\n");
getchar();
getchar();
getchar();
return 0;
}
