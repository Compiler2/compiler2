#include <header.h>

int main_bench()
{
	int n,i,s,a,c=1,k,t;
	my_scanf("%d",&n);
	for(i=0;i<n*n;i++)
	{
		my_scanf("%d",&a);
		if(a==0)
		{
			if(c)
			{
				t=i;
				c=0;
			}
			k=i;
		}
	}
	s=(k%n-t%n-1)*(k/n-t/n-1);
	my_printf("%d",s);
	return 0;
}