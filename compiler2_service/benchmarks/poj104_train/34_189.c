#define NUM_ITER 293097

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	void print1(int n);
	void print2(int n);
	int printf1(int n);
	int printf2(int n);
	if(n==1)my_printf("End\n");
	else
	{
		int i;
		for(;n!=1;)
		{
			if(n%2==0)
			{
				print1(n);
				n=printf1(n);
			}
			else
			{
				print2(n);
				n=printf2(n);
			}
		}
		my_printf("End\n");
	}
}
int printf1(int n)
{
	int m;
	m=n/2;
	return m;
}
void print1(int n)
{
	my_printf("%d/2=%d\n",n,n/2);
}
int printf2(int n)
{
	int m;
	m=n*3+1;
	return m;
}
void print2(int n)
{
	my_printf("%d*3+1=%d\n",n,n*3+1);
}

	
	
	