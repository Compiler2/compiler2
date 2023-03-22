#include <header.h>



int main_bench()
{
	int a, b, c, d;
	my_scanf("%d %d",&a,&b);
	c=1;
	while(c==1)
	{
		if(a>b)
			a=a/2;
		if(a<b)
			b=b/2;
		if(a==b)
		{
			c=0;
			my_printf("%d",a);
		}
	}
	return 0;
}

