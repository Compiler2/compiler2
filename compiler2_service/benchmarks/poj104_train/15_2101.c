#include <header.h>

int main_bench()
{
	int n,i,k,m,a=0,b,p=0,q=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n;k++)
		{
			my_scanf("%d",&m);
			if(m==0)
			{
				a=a+1;
				p=p+1;
			}
		}
		if(p!=0)
			q=q+1;
		p=0;
	}	
	b=(q-2)*(a-2*q)/2;
	my_printf("%d\n",b);
}
