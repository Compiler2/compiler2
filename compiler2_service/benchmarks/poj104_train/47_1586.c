#define NUM_ITER 51601

#include <header.h>

int main_bench()
{
	int n,i,j,a;
	my_scanf("%d",&n);
	int b[100];
	for(i=n-1;i>=0;i--)
	{
		my_scanf("%d",&a);
		b[i]=a;
	}
	for(j=0;j<n;j++)
	{
		if(j<n-1)
		{
		my_printf("%d ",b[j]);
		}else{
			my_printf("%d",b[j]);
		}
	}
	return 0;
}