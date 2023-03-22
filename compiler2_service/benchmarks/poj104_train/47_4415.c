#include <header.h>


int main_bench()
{
int a[100];
int n,i,b;
my_scanf("%d\n",&n);
i=1;
while(i<=n){
my_scanf("%d",&a[i]);
i++;
}
i=1;
while(i<=n/2)
{
	b=a[i],a[i]=a[n-i+1],a[n-i+1]=b;
	i++;
}
i=1;
while(i<n)
{
	my_printf("%d ",a[i]);
	i++;
}
my_printf("%d",a[n]);
}