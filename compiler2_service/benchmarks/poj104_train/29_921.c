#define NUM_ITER 4742

#include <header.h>

int main_bench()
{
	double a[1000],sum,q;
	int b,c,d[1000],j,k,l,n,i;
	b=2;
	c=1;
	a[0]=(double)b/c;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&d[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=a[0];
		b=2;
		c=1;
		for(j=1;j<d[i];j++)
		{
			
			k=b;
			b=(b+c);
			c=k;
			a[j]=(double)b/c;
			sum=sum+a[j];
		}
		q=sum;
		my_printf("%.3lf\n",q);
	}
	return 0;
}