#include <header.h>

int main_bench()
{
	int n,i;
	int a[100];
	my_scanf("%d",&n);
	int *p;
	p=a;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",p);
		p=p+1;
	}
	p=p-1;
	for(i=0;i<n-1;i++)
	{
		my_printf("%d ",*p);
		p=p-1;
	}
	my_printf("%d",*p);
}

