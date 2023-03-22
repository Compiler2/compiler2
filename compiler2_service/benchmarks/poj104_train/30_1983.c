#define NUM_ITER 41282

#include <header.h>

int main_bench()
{
	int i,n,sum;
	sum=0;
	my_scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (i%7!=0 && (int)i/10!=7 && i%10!=7)
		{
			sum+=i*i;
		}
		if (i%7==0 || (int)i/10==7 || i%10==7) 
		{
			continue;
		}
	}
	my_printf("%d",sum);
	return 0;
}

