#define NUM_ITER 40515

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int org[100],opp[100];
	int i;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&org[i]);
	}
	for(i=0;i<n;i++)
	{
		opp[i]=0;
	}
	for(i=0;i<n;i++)
	{
		opp[n-1-i]=org[i];
	}
	int k;
	for(k=0;k<n-1;k++)
	{
		my_printf("%d ",opp[k]);
	}
	my_printf("%d",opp[n-1]);
	return 0;
}