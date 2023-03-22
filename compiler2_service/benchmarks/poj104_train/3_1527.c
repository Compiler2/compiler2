#include <header.h>

int main_bench()
{
	int n,k;
	my_scanf("%d %d",&n,&k);
	int p=0;
	int shuzu[1000];
	for(int i=0;i<=n-1;i++)
	{
		my_scanf("%d",&shuzu[i]);
	}
	for(int a=0;a<=n-1;a++)
	{
		for(int b=0;b<=n-1;b++)
		{
			if(shuzu[a]+shuzu[b]==k)p=1;
		}
	}
	if(p==1)my_printf("yes");
	if(p==0)my_printf("no");
	return 0;
}

