#define NUM_ITER 52714

#include <header.h>

void inv(int *x,int n)
{
     int temp,*p,*i,*j,m=(n-1)/2;
     i=x;j=x+n-1;p=x+m;
     for(;i<=p;i++,j--)
     {
                     temp=*i;*i=*j;*j=temp;
                     }
                     return;
                     }
int main_bench()
{
    int i,n,a[100],*p;
    my_scanf("%d",&n);
    p=a;
    for(i=0;i<n;i++)
    my_scanf("%d",p++);
    inv(a,n);
    for(i=0;i<n-1;i++)
    my_printf("%d ",a[i]);
    
    my_printf("%d",a[n-1]);
     return 0;
}  