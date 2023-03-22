#define NUM_ITER 145939

#include <header.h>

int isprime(int n)
{
	int i;
	for(i=2;i*i<=n;i++)
		if(n%i==0)
			return 0;
	return 1;
}

int main_bench()
{
	int m,j;

	my_scanf("%d",&m);
	
	for(j=3;j*2<=m;j+=2)
		if(isprime(j)&&isprime(m-j))
			my_printf("%d %d\n",j,(m-j));

	return 0;
}