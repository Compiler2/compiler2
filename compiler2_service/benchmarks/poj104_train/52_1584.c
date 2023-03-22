#include <header.h>

int main_bench()
{
	int *p,i,a[100],n,m;
	p=a;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)my_scanf("%d",p++);
	for(i=0,p=a+n-m;i<m;i++,p++)my_printf("%d ",*p);
	for(i=0,p=a;i<n-m-1;i++,p++)my_printf("%d ",*p);
	my_printf("%d",*p);
}