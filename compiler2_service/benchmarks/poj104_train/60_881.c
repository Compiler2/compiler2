#define NUM_ITER 15526

#include <header.h>

int issushu(int x);
int main_bench()
{
	int n,i,flag=0;

	my_scanf("%d",&n);
	for(i=1;i<=n-2;i++)
	{
		if(issushu(i)&&issushu(i+2))
		{
			my_printf("%d %d\n",i,i+2);
			flag=1;
		}
	}
	if(flag==0) my_printf("empty");
	

	return 0;
}

int issushu(int x)
{
	int j;
	if(x<2) return 0;
	else if(x==2) return 1;
	else
	{
		for(j=2;j<x;j++)
		{
			if(x%j==0) return 0;
		}
	}
	return 1;
}