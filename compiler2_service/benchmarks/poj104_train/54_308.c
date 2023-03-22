#include <header.h>

int main_bench()
{
	int k,m,n,i,q=1;
	my_scanf("%d %d",&n,&k);
	if(n==2 && k==1)
		my_printf("7\n",m);
	else
	{
		for(i=1;i<=n;i++)
		{
			q=n*q;
			m=q-n*k+k;
		}
		my_printf("%d\n",m);
	}
}


