#include <header.h>

int main_bench()
{
	int n,s=0,i;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i/10==7);
		else
		{
			if(i%10==7);
			else
			{
			if(i%7==0);
			else s=s+i*i;
			}
		}

	}
	my_printf("%d",s);
	return 0;
}