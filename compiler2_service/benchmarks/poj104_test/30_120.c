#define NUM_ITER 79438

#include <header.h>

int main_bench()
{
	int i,n,jieguo=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((i-7)%10==0)
			jieguo=jieguo;
		else if((i/10)==7)
			jieguo=jieguo;
		else if(i%7==0)
			jieguo=jieguo;
		else
			jieguo+=i*i;
	}
	my_printf("\n%d",jieguo);
	return 0;
}
