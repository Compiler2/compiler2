#define NUM_ITER 66086

#include <header.h>

int main_bench()
{
	int m;
	int sum=0;
	int i;
	my_scanf("%d",&m);

	for(i=1;i<=m;i++)
	{
		if(i%10==7||i/10==7||i%7==0)
			sum+=i*i;
	}
	
	int SUM=0;
	int n;
	for(n=0;n<=m;n++)
	{
		SUM+=n*n;
	}
	my_printf("%d",SUM-sum);
	return 0;
	
}