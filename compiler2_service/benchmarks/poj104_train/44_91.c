#define NUM_ITER 329243

#include <header.h>

int reverse(int n);
int main_bench()
{
	int n,k,j;
	for(j=0;j<6;j++)
	{
		my_scanf("%d",&n);
	if(n<0)
	{
		n=-n;
	    k=reverse(n);
	    my_printf("-%d\n",k);
	}
	else
	{
		 k=reverse(n);
	    my_printf("%d\n",k);
	}
	}
	return 0;
}
int reverse(int num)
{
	int x,i,k,a=num;

	for(x=1;a>=10;x++)
	{
		a=a/10;
	}
	for(i=0,k=0;i<x;i++)
	{
		k=num%10+k*10;
		num=(num-(num%10))/10;
	}
	return k;
}