#include <header.h>



int main_bench()
{
	int n,i,a[100];
	int *b[100];
	my_scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
	}
for(i=1;i<=n;i++)

	{
		b[i]=&a[n+1-i];
		
	}

my_printf("%d",*b[1]);
	for(i=2;i<=n;i++)
	{

	
		my_printf(" %d",*b[i]);
	}




	return 0;
}