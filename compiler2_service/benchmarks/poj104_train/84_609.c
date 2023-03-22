#define NUM_ITER 60985

#include <header.h>

int main_bench()
{
	int a,b[100],c,i;
	my_scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		my_scanf("%d",&b[i]);
	if(b[1]<b[2])
	{
		c=b[1];
		b[1]=b[2];
		b[2]=c;
	}
	else
	{
		if(b[i]>=b[1])
		{
			c=b[2];
			b[2]=b[1];
			b[1]=b[i];
		}
		else
		{
			if(b[i]>=b[2])
			{
				c=b[2];
				b[2]=b[i];
			}
		}
	}
	}
	my_printf("%d\n",b[1]);
	my_printf("%d\n",b[2]);
	return 0;
}