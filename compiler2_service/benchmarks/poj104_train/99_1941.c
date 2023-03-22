#include <header.h>

int main_bench()
{
	int a[100],n,m,e,b,c,d;
	double p,q,k,i;
	my_scanf("%d",&n);
	e=0;
	b=0;
	c=0;
	d=0;
	p=0;
	q=0;
	k=0;
	i=0;
	for(m=1;m<=n;m++)
	{
		my_scanf("%d",&a[m]);
		{
			if(1<=a[m]&&a[m]<=18)
				e++;
		}
					p=100*(double)e/n;
		
		{
			if(19<=a[m]&&a[m]<=35)
				b++;
		}
					q=100*(double)b/n;
		
		{
			if(36<=a[m]&&a[m]<=60)
				c++;
		}
					k=100*(double)c/n;
		
		{
			if(61<=a[m])
				d++;
		}
					i=100*(double)d/n;
	}
	my_printf("1-18: %.2f%%\n",p);
	my_printf("19-35: %.2f%%\n",q);
	my_printf("36-60: %.2f%%\n",k);
	my_printf("60??: %.2f%%\n",i);
}