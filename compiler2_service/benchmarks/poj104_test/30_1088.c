#include <header.h>

int main_bench()
{
	int n,i,a,sam;
	sam=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
			sam=sam;
		else
		{
			if(i<10)
			{
				if(i!=7)
					sam=sam+i*i;
				else
					sam=sam;
			}
			else
			{   if(i/10==7)
			     sam=sam;
			    else
				{
					a=i%10;
				    if(a==7)
					sam=sam;
				    else
					sam=sam+i*i;
				}
			}
		}
		
	}
	my_printf("%d",sam);
	return 0;
}