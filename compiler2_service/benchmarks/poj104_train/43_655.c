#define NUM_ITER 47394

#include <header.h>

int main_bench()
{
	int su(int x);
	int n,i;
	my_scanf("%d\n",&n);
	for(i=3;i<=n/2;i+=2)
	{
		if(su(i)&&su(n-i))
		{
			my_printf("%d %d\n",i,n-i);
		}
	}
}

int su(int x)
{
	int t,k,leap=1;
	if(x==3)
	  return 1;
	else 
	{
		for(t=3;t<=(x/2);t+=2)
		{
			k=x%t;
			if(k==0)
			{
				leap=0;
				break;
			}
		}
	}
	return(leap);
}