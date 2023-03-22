#include <header.h>

int main_bench()
{
	int n,m=0,i,a[10];
	my_scanf("%d",&n);
	do
	{
		a[m]=n%10;
		n/=10;
		m++;
	}while(n>0);
	for(i=0;i<m;i++)
	{
		my_printf("%d",a[i]);
	}
	my_printf("\n");
}