#define NUM_ITER 43238

#include <header.h>

int main_bench()
{
	int num[100000],n,del,rem;
	my_scanf("%d",&n);
	int i;
	for(i=0;i<=n-1;i++)
	my_scanf("%d",&num[i]);
	my_scanf("%d",&del);
	rem=n;
	int g;
	for(g=n-1;num[g]==del;g--)
	{
		rem-=1;
	}
	int e;
	for(e=0;e<=rem-1;e++)
	{
		while(num[e]==del)
		{
			int t;
			for(t=e;t<=rem-2;t++)
			{
				num[t]=num[t+1];
			}
			rem-=1; 
		}
	}
	int m;
	for(m=0;m<=rem-1;m++)
	{
		my_printf("%d",num[m]);
		if(m<=rem-2)
			my_printf(" ");
	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
	return 0;
}
