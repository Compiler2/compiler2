#define NUM_ITER 15448

#include <header.h>

int checkprime(int af)
{
	int i;
	for (i=2;i<(af);i++)
	{
		if (af%i==0)
			return 0;
	}
	return 1;
}
int main_bench()
{
	int a,n,i;
	my_scanf("%d",&n);
	
	a=0;
	for(i=2;i<n-1;i++)
	{
		if (checkprime(i)==1&&checkprime(i+2)==1)
		{
			my_printf("%d %d\n",i,i+2);
		a++;
		}}
if(a==0)
my_printf("empty");
	return 0;
}
