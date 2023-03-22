#define NUM_ITER 2990

#include <header.h>


int main_bench()
{
    int a[101],n,i,m,j,s;
    my_scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
                     my_scanf("%d",&a[i]);
                     }
    for(i=m;i>0;i--)
    {
                    for(j=n;j>=n;j--)
                    {
                                     a[0]=a[j];
                                     a[j]=0;
                                     for(s=n;s>=1;s--)
                                     {a[s]=a[s-1];}
                                     }
                                     }
    my_printf("%d",a[1]);
    for(s=2;s<=n;s++)
    {
                     my_printf(" %d",a[s]);
                     }
    
}
    