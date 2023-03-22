#include <header.h>

int main_bench()
{
    int n,m,i,k;
    my_scanf("%d%d",&n,&m);
    int a[100];
    for(i=1;i<=n;i++)
    {
		my_scanf("%d",&a[i]);
    }
    int *num=a;
    for(i=n-m+1;i<=n;i++)
    {
		k=*(num+i);
		my_printf("%d",k);
		my_printf(" ");
    }
    for(i=1;i<=n-m-1;i++)
    {
		k=*(num+i);
		my_printf("%d",k);
		my_printf(" ");
    }
    my_printf("%d",a[n-m]);
    return 0;
}