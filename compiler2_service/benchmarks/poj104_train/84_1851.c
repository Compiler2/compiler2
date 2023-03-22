#include <header.h>

int main_bench()
{
	int n;
	int A[100];
	int i;
	my_scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		my_scanf("%d",&A[i]);
	}
	int x,y;
	x=y=0;
	for (i=1;i<=n;i++)
	{
		if (x<=A[i])
		{
			y=x;
			x=A[i];
		}
	}

	my_printf("%d\n",x);
	my_printf("%d\n",y);
	return 0;
}