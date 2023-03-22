#include <header.h>


int main_bench()
{
	int a,b,c,i;
	int n,m;
	double sum;
	my_scanf("%d",&n);
	while (n>0)
	{
		my_scanf("%d",&m);
		sum=0;
		a=1;b=2;
		for (i=1;i<=m;i++)
		{
			sum+=(double)(b)/a;
			c=b+a;
			a=b;
			b=c;
		}
		my_printf("%.3f\n",sum);
		n--;
	}
}