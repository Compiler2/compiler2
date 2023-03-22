#define NUM_ITER 52441

#include <header.h>

int main_bench()
{
	int k,a,b,c,max,xmax;
	my_scanf("%d",&k);
	my_scanf("%d",&a);
	my_scanf("%d",&b);
	while(k>=3)
	{
		my_scanf("%d",&c);
		if(a>=c)
		{
			if(c>=b){max=a;xmax=c;}
			else if(a>=b){max=a;xmax=b;}
			else {max=b;xmax=a;}
		}
		else
		{
			if(a>=b){max=c;xmax=a;}
			else if(c>=b){max=c;xmax=b;}
				 else {max=b;xmax=c;}
		}
		a=max;b=xmax;
		k--;
	}
	my_printf("%d\n%d\n",max,xmax);
}