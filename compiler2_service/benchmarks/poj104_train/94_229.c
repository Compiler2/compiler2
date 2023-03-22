#define NUM_ITER 5761

#include <header.h>

int main_bench()
{
	int N, i, j, x;
	int a[500];
	my_scanf("%d", &N);
	for(i=0;i<N;i++)
	{
		my_scanf("%d", &a[i]);
		if(a[i]%2==0)a[i]=0;
	}
	for(j=1;j<N;j++)
	{
		for(i=0;i<N-j;i++)
		{
			if(a[i]>a[i+1])
			{
				x=a[i];
				a[i]=a[i+1];
				a[i+1]=x;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		if(a[i]!=0)
		{
		if(i<(N-1))
			my_printf("%d,", a[i]);
		else
			my_printf("%d", a[i]);
		}
	}
	return 0;
}
