#define NUM_ITER 419

#include <header.h>

int main_bench()
{
	int n,i,j,a,b,c,d,k;
	my_scanf("%d",&n);
	c=0;
	for(i=1;i<=n;i++)
	{
		a=0;
		for(j=1;j<=n;j++)
		{
			my_scanf("%d",&k);
			if(j<n)
				my_scanf(" ");
			if(k==0)
				a=a+1;
		}
		if(a>2)
		b=a;
		if(a>=1)
			c=c+1;
	}
	d=(b-2)*(c-2);
	my_printf("%d",d);
	return 0;
}