#define NUM_ITER 5213

#include <header.h>

int main_bench()
{
	int m,i,n;
	my_scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		int j=0,a=1,b=2,d;
		float c,sum=0;
		my_scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			c=(float)b/a;
			d=b;
			b+=a;
			a=d;
			sum+=c;
		}
			my_printf("%.3f\n",sum);
	}
	return 0;
}
