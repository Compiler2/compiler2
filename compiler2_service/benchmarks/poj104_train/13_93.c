#include <header.h>

int god(int num1,int num2);
int main_bench()
{
	int number,ctr,i;
	int n[20000],c[20000];
	my_scanf("%d",&number);
	for(i=0;i<=20000;i++)
	{
		c[i]=0;
	}
    for(ctr=0;ctr<number;ctr++)
	{
		my_scanf("%d",&n[ctr]);
	}
	my_printf("%d",n[0]);
	for(ctr=1;ctr<number;ctr++)
	{
		for(i=0;i<ctr;i++)
		{
			if(n[i]==n[ctr])
			{
				c[ctr]++;
			}
		}
		if(c[ctr]==0)
			my_printf(" %d",n[ctr]);
	}
				
	getchar();
	return 0;
}

