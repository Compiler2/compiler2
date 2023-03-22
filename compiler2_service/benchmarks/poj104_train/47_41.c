#include <header.h>

int main_bench()
{
	int n,i,t;
	int a[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	my_printf("%d",a[n-1]);
	for(i=1;i<n-1;i++)
	{
		t=a[n-i-1];
		my_printf("% d",t);
	}
	my_printf(" %d\n",a[0]);
	return 0;
}