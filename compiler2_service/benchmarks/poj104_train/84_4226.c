#define NUM_ITER 62108

#include <header.h>

int main_bench()
{
	int a,b,c,x,m1,m2,i;
	i=3;
	my_scanf("%d",&a);
	my_scanf("%d%d",&b,&c);
	if (b>c)
		{
			m1=b;
			m2=c;
		}
		else
		{
			m1=c;
			m2=b;
		}
	while(i<=a)
	{
		my_scanf("%d",&x);
		if(x>m1)
		{
			m2=m1;
			m1=x;
		}
		else if(x>m2)
		{
			m2=x;
		}
		else
		{
			x=x;
		}
		i++;
	}
	my_printf("%d\n%d\n",m1,m2);
	return 0;
}

		
		

