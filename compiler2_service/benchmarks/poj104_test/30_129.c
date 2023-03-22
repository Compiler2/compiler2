#define NUM_ITER 238928

#include <header.h>

int main_bench()
{
	int n,sum=0,i,j,p,q;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum=sum+i*i;
	j=n/7;
	for(i=1;i<=j;i++)
		sum=sum-7*i*7*i;
	p=n/70;
	q=n/10;
	if(p==1)
	{
		for(i=1;(i+70)<=n&&(i+70)<=79;i++)
		sum=sum-(70+i)*(70+i);
		if(n>=77)
			sum=sum+77*77;
	    
	    for(i=1;i<q;i++)
			sum=sum-(10*i+7)*(10*i+7);
		if(n>=80)
			sum=sum+77*77;

	}
	else
	{
		for(i=1;i<q;i++)
			sum=sum-(10*i+7)*(10*i+7);
	}
	if(n>=(10*q+7)&&n>7)
	{
		sum=sum-(10*q+7)*(10*q+7);
	}
	my_printf("%d",sum);
	return 0;
}
