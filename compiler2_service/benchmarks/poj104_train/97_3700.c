#define NUM_ITER 964950

#include <header.h>

int main_bench()
{
	int a[6]={0};
	int n,i,j;
	my_scanf("%d",&n);
	int wor[6]={100,50,20,10,5,1};
	int num[6];
	for(i=0;i<=5;i++)
	{
		num[i]=n/wor[i];
		n=n-num[i]*wor[i];
	}
	for(i=0;i<=5;i++)
	{
		my_printf("%d\n",num[i]);
	}
	return 0;
}







