#define NUM_ITER 9819

#include <header.h>

int main_bench()
{
	int n,a,b,i,j,k,l,flag=0;
	my_scanf("%d",&n);
	for(i=3;i<=n/2;i++)
	{flag=0;
		for(j=2;j<i;j++)
	{
		if(i%j==0)
		flag=1;}
	if(flag==0)
	{a=i;
	b=n-a;
	for(k=2;k<b;k++)
		if(b%k==0)
			flag=1;}
	if(flag==0)
		my_printf("%d %d\n",a,b);}
	my_scanf("%d",&l);
	return 0;
}