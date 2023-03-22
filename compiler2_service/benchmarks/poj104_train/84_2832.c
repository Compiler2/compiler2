#define NUM_ITER 56775

#include <header.h>

int main_bench()
{
	int a,b,i,n,m=0,p=0;
	my_scanf("%d",&a);
	my_scanf("%d",&b);
	m=b;
	for(i=2;i<=a;i++)
	{
		my_scanf("%d",&n);
	
		if (n>m)
		{
			p=m;
		    m=n;
		}if(n>p&&n<m)
		{
			p=n;
			m=m;
		}if(n<p)
		{
			p=p;
			m=m;
		}
	}	my_printf("%d\n",m);
	
     my_printf("%d\n",p);
	return 0;
}