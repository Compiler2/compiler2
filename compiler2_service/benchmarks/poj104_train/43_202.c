#define NUM_ITER 49196

#include <header.h>

int prime(int num)
{
	int i;
	if(num%2==0)
		return 0;
	else
	{
		for(i=3;i<num;i+=2)
	{
		if(num%i==0)
			break;
	}
	if(i==num)
		return 1;
	else
		return 0;
	}
}
int main_bench()
{
	int num;
	int i;
	my_scanf("%d",&num);
	for(i=3;i<=num/2;i+=2)
	{
		if(prime(i)&&prime(num-i))
			my_printf("%d %d\n",i,num-i);
	}
	return 0;
}