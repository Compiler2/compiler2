#include <header.h>

int main_bench()
{
	int a[100],n,k=0;
	int *p=a;
	my_scanf("%d",&n);
	for(;;p++)
	{
		if(k==n)
			break;
		my_scanf("%d",p);
		k++;
	}
	p--;
	my_printf("%d",*p);
	p--;
	do
	{
		my_printf(" %d",*p);
		p--;
	}while(p>=a);
	return 0;
}