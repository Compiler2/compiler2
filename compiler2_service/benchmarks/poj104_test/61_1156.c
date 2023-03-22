#define NUM_ITER 228893

#include <header.h>


int main_bench()
{
	int a[20]={1,1};
	int i;
	int N;
	int b[20];
	for (i=2;i<20;i++)
	{
		a[i]=a[i-1]+a[i-2];	
	}
	
	
	
	my_scanf("%d",&N);
	my_printf("\n");
	for (i=0;i<=N-1;i++)
	{
		my_scanf("%d",&b[i]);
		my_printf("\n");
	}
	
	for (i=0;i<=N-1;i++)
	{
		my_printf("%d",a[b[i]-1]);
		my_printf("\n");
	}
	
	return 0;
}