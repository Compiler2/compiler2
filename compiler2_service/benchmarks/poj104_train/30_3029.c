#define NUM_ITER 61200

#include <header.h>

int main_bench()
{
	int i,c,n,sum=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7!=0)
		{
			c=(i%100)/10;
			if(i%10!=7)
			{
				if(c!=7)
				{
					sum=sum+i*i;
				}
			}
		}
	}
	my_printf("%d",sum);
	return 0;
}