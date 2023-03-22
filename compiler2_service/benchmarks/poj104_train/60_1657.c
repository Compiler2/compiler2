#include <header.h>

int main_bench()
{
	int a,b,n,j,m,i,c;
	my_scanf("%d",&n);
	b=0;
	c=0;
	a=0;
	for(i=3;i<n-1;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				b++;
			}
		}
		m=i+2;
		for(j=2;j<m;j++)
		{
			if(m%j==0)
			{
				c++;
			}
		}
	if(b+c==0)
	{
		a++;
		my_printf("%d %d\n",i,m);
	
	}
	b=0;
		c=0;
}
if(a==0)
my_printf("empty");
	return 0;
}
