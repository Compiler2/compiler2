#define NUM_ITER 53549

#include <header.h>


int main_bench()
{
	int cun[100]={0},fang[100]={0};
	int n;
	my_scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&cun[i]);
		fang[i]=cun[i];
	}
	for(i=0;i<n-1;i++)
	{
		cun[i]=fang[n-1-i];
		my_printf("%d ",cun[i]);
	}
	cun[n-1]=fang[0];
	my_printf("%d",cun[n-1]);
	return 0;
}