#include <header.h>

int main_bench()
{
	int n, i, j, k, l;
	my_scanf("%d", &n);
	if(n==1)
	{
		my_printf("End");
		return 0;
	}
	do
	{
		if(n%2!=0)
		{
			k=n*3+1;
			my_printf("%d*3+1=%d\n", n, k);
			n=k;
		}
		if(n%2==0)
		{
			j=n/2;
			my_printf("%d/2=%d\n", n, j);
			n=j;
		}
	}while(n>1);
	my_printf("End");
	return 0;
}

