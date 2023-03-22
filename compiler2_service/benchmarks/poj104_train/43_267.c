#define NUM_ITER 9139

#include <header.h>

int zhishu(int x)
{
	int flag=1;
	for(int i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			flag=0;
		}
	}
	return flag;
}
int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	for(i=3;i<=n/2;i++)
	{
		if(zhishu(i)&&zhishu(n-i))
		{
			my_printf("%d %d\n",i,n-i);
		}
	}
	return 0;
}
