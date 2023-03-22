#define NUM_ITER 49109

#include <header.h>

int main_bench()
{
	long int k,i=0,a,b,c=0,d;
	my_scanf("%d\n",&k);
	k=k-1;
	for (;i<=k;i++)
	{
		my_scanf("%d\n",&a);
		if(a<b)
		{
			if(a>c)
				c=a,b=b;
			else
				c=c,b=b;
		}
		else
			if (d>c)
				c=b,b=a;
			else
				c=c,b=a;
	}
	my_printf("%ld\n%ld\n",b,c);
}