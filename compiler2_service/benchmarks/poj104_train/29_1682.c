#define NUM_ITER 3647

#include <header.h>

int main_bench()
{
	int a,n,i,m,b,c;
	float sum;
	my_scanf("%d\n",&m);
	for(i=1;i<=m;i++)
	{	
		my_scanf("%d\n",&n);
		sum=0;
		b=1;
		c=1;
		for(a=1;a<=n;a++)
		{	
			b=b+c;
			c=b-c;
			sum=sum+(double)(b)/(double)(c);
		}
		my_printf("%.3f\n",sum);
	}
	return 0;
}