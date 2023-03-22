#include <header.h>

int main_bench()
{
    int i,n,a[20],m;
    int f[20]={1,1};
    for(i=2;i<20;i++)
    f[i]=f[i-2]+f[i-1];
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    my_scanf("%d",&m);
    a[i]=f[m-1];
    }   
    for(i=1;i<=n;i++)
    my_printf("%d\n",a[i]);
    getchar();
    getchar();
    return 0;
}
