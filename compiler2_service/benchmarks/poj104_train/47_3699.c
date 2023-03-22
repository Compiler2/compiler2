#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	int *A,*B;
	A=(int *)malloc(sizeof(int)*n);
	B=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&A[i]);
		B[n-1-i]=A[i];
	}
	for(i=0;i<n;i++)
	{
		if(i<(n-1))
		my_printf("%d ",B[i]);
		else
			my_printf("%d",B[i]);

	}

	return 0;
}

