#include <header.h>

int main_bench()
{
    float a[1000];
    float b[1000];
    int n,m,j,i;
    float sum;
    a[1]=1;a[2]=2;
    my_scanf("%d",&m);
    for(j=1;j<=m;j++)
    {sum=0;
    my_scanf("%d",&n);
    
    for(i=3;i<=n+1;i++)
    a[i]=a[i-1]+a[i-2];
    for(i=1;i<=n;i++)
    {
                sum=sum+a[i+1]/a[i];     }
               my_printf("%.3f\n",sum) ;
               }
              getchar();getchar(); }
