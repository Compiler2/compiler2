#include <header.h>

int nseven(int n)
{
	if(n%7==0) return 0;
	while(n/10!=0)
		{if(n%10==7) return 0;n=n/10;}
	if(n%10==7) return 0;
	else return 1;
}

int main_bench()
{
	int n,i,sum=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(nseven(i)) sum+=i*i;
	my_printf("%d\n",sum);
	return 0;
}
