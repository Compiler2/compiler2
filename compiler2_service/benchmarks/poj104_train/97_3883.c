#define NUM_ITER 1371213

#include <header.h>

int main_bench()
{
	int n,i;
	int a[6]={100,50,20,10,5,1};
	int b[6]={0};
	my_scanf("%d",&n);
	for(i=0;i<6;i++)
	{
		while(n>=a[i])
		{
			b[i]++;
			n-=a[i];
		}
	}
	for(i=0;i<6;i++)
	{
		my_printf("%d\n",b[i]);
	}
	return 0;
}