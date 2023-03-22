#include <header.h>

void inv(int x[],int n)
{
     int temp,i,j,m=(n-1)/2;
     for(i=0;i<=m;i++)
     {
                     j=n-1-i;
                     temp=x[i];x[i]=x[j];x[j]=temp;
                     }
                     return;
                     }
int main_bench()
{
    int i,n,a[100];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    inv(a,n);
    for(i=0;i<n-1;i++)
    my_printf("%d ",a[i]);
    
    my_printf("%d",a[n-1]);
     return 0;
}  
    
    
    
