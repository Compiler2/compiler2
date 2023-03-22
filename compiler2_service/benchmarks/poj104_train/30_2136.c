#define NUM_ITER 54359

#include <header.h>


int yu7wuguan(int n)
{
	if(n%7==0)
	{
		return 0;
	}
	for(int i=n;i>0;i/=10)
	{
		if(i%10==7)
		{
			return 0;
		}
	}
	return 1;
}


int main_bench()
{
	int n,sum=0,y=0,i=1;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		y=0;
		if(yu7wuguan(i))
		{
			
			sum+=i*i;
		}
		
	}
	my_printf("%d",sum);
	return 0;
}