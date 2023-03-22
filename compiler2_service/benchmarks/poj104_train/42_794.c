#include <header.h>

 
int main_bench()
{
    int n,a[100001],k,i,j;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
                     my_scanf("%d",&a[i]);
    }
    my_scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
                     if(a[i]==k)
                     {
                                for(j=i;j<n;j++)
                                {
                                a[j]=a[j+1];
                                }
                                n--;
                                i--;
                     }
    }
    for(i=1;i<n;i++)
    {
    my_printf("%d ",a[i]);
    }
    my_printf("%d\n",a[n]);
    getchar();
    getchar();
    getchar();
}
 
