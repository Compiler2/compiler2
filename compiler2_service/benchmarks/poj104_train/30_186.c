#define NUM_ITER 68902

#include <header.h>

int f(int a)
{
	if(a%7==0)
		return 0;
	else if(a>10 && a%10!=0 && (a%10)%7==0)
		return 0;
	else if(a>=70 && a<=79)
		return 0;
	else
		return 1;
}

int main_bench()
{
	int n,i;
	long sum=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(f(i))
			sum=sum+i*i;
	}
	my_printf("%d\n",sum);
	return 0;
}