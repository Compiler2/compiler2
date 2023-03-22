#include <header.h>

int main_bench()

{
	int a,b,c,d,n;
	my_scanf("%d",&n);
	a=(int)(n/1000);
	b=(int)(n/100-a*10);
	c=(int)(n/10-a*100-b*10);
	d=(int)(n-a*1000-b*100-c*10);
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			{
				my_printf("%d\n",d);
			}
			else
			my_printf("%d%d\n",d,c);
		}
		else my_printf("%d%d%d\n",d,c,b);
	}
	else
	my_printf("%d%d%d%d\n",d,c,b,a);		
	return 0;
}