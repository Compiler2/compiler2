#define NUM_ITER 946108

#include <header.h>

int main_bench()
{
	int n,i,a[6]={100,50,20,10,5,1},b[6]={0};
	my_scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		b[i]=n/a[i];
		n=n%a[i];
	}
	b[5]=n;
	for(i=0;i<6;i++)
	{
		my_printf("%d\n",b[i]);
	}
	return 0;
}

