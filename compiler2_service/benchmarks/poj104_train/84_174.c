#define NUM_ITER 58231

#include <header.h>

int main_bench()
{
	int a, b, c;
	int j, i;
    my_scanf("%d", &j);
	for (i=0;i<j;i++)
	{
		my_scanf("%d", &a);
		if(i==0)
		{
			c=a;
			b=a;
		}
		else if(i>=2)
		{
			if(b>a)
			{
				if(c<a)
					c=a;
				else if(c>a&&c>b)
				{
					a=b;
					b=c;
					c=a;
				}
			}
			else if(b<a&&c<b)
			{
			c=b;
			b=a;
			}
			else if(b<a&&c>=b)
			{
				b=a;
			}
		}
		else if(b<a)
		b=a;
	}
	my_printf("%d\n", b);
	my_printf("%d", c);
	return 0;
}