#include <header.h>

int ssd(int i);
int main_bench()
{
	int j,n,flag=0;
	my_scanf("%d",&n);
	if(n==1||n==2||n==4)
	{
		my_printf("empty\n");
		return 0;
	}
	if(n==3)
	{
		my_printf("1 3\n");
		return 0;
	}
	if(n==5)
	{
		my_printf("3 5\n");
		return 0;
	}
	for(int i=5;i<=n;i++)
	{
		j=i-2;
		if(ssd(i))
		{
			my_printf("%d %d\n",j,i);
			flag=1;
		}
	}
	if(flag==0)
	{
		my_printf("empty\n");
	}
	return 0;
}

int ssd(int i)
{
	int j;
	j=i-2;
	for(int p=2;p<i;p++)
	{
		if(i%p==0)
		{
			return 0;
		}
	}
	for(int q=2;q<j;q++)
	{
		if(j%q==0)
		{
			return 0;
		}
	}
	return 1;
}

	
