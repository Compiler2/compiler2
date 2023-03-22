#define NUM_ITER 111926

#include <header.h>

int main_bench()
{
	int n,sum=0,i;
	my_scanf("%d", &n);
	for(i=0;i<=n;i++)
	{
		if(i%7==0)
			continue;
		else if((i-7)%10==0)
			continue;
		else if(i-70>0&&i-70<10)
			continue;
		else sum = sum + i*i;
	}
	my_printf("%d", sum);
	return 0;
}