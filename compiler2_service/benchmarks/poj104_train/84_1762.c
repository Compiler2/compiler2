#define NUM_ITER 58138

#include <header.h>

int main_bench()
{
	int a,b,c,i,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&c);
		if(i==0)
		{
			a=c;
			b=c;
		}
		else if(i==1)
		{
			if(c>=a)
			{
				a=c;
				b=b;
			}
			else
			{
				a=a;
				b=c;
			}

		}
		else
		{
			if(c>=a)
			{
				b=a;
				a=c;
			}
	    	else if(c<=b)
			{
				a=a;
				b=b;
			}
			else
			{
				a=a;
				b=c;
			}
		}
	}
        my_printf("%d\n",a);
        my_printf("%d\n",b);
		return 0;
}