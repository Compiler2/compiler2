#define NUM_ITER 124722

#include <header.h>


int isPrime(int x)
{
	int i;
	for(i=2;i*i<=x;i++)
		if(x%i==0)
			return 0;

	return 1;
}

int main_bench()
{
	int m,i;
	my_scanf("%d",&m);

	for(i=3;i<=m/2;i+=2)
	{
		if(isPrime(i)&&isPrime(m-i))
			my_printf("%d %d\n",i,m-i);
	}
	
	return 0;
}