#define NUM_ITER 46035

#include <header.h>

int main_bench()
{
	int n,i,s=0;
	my_scanf("%d",&n);
	if(n>=10)
	{
	    for(i=1;i<=n;i++)
		{
		    if((i%7==0)||((i/10)==7)||((i%10)==7))
			{
				continue;
			}
			if((i%7!=0)&&((i/10)!=7)&&((i%10)!=7))
			{
				s=s+i*i;
			}
		}
	}
	if(n>=1&&n<10)
	{
		for(i=1;i<=n;i++)
		{
		    if(i%7!=0)
			{
				s=s+i*i;
			}
			else continue;
		}
	}
	my_printf("%d\n",s);
}

