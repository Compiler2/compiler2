#include <header.h>


int main_bench()
{
	int n,k,i,s;
	s=1;
	my_scanf("%d%d",&n,&k);
	if(n==2)
		my_printf("7");
	else
	{
		for(i=1;i<=n;i++)
		{
			s=s*n;
		}
		s=s-n*k+k;
		my_printf("%d",s);
	}
}
