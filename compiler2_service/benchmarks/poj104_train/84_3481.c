#include <header.h>

int main_bench()
{

	int i,b,c,x;
	int a[100];
	my_scanf("%d",&x);
	my_scanf("%d",&b);
	c=b;

	for(i=1;i<=x-1;i++)
	{
		my_scanf("%d",&a[i-1]);
		if(a[i-1]>=b)b=a[i-1];
	}
	for(i=1;i<=x-1;i++)
	{
		if(a[i-1]>=c&&a[i-1]<b)c=a[i-1];
	}
	my_printf("%d\n%d",b,c);
	return 0;
}
