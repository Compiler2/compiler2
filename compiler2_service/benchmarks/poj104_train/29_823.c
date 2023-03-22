#define NUM_ITER 5297

#include <header.h>


int main_bench()
{
	int n,a=1,b=2,c;
	my_scanf("%d",&n);
	int x;
	double s[100]={0};
	for(int i=0;i<n;i++)
	{
		my_scanf("%d",&x);
		for(int j=0;j<x;j++)
		{
			s[i]=s[i]+(double)b/a;
			c=a;
			a=b;
			b=b+c;
		}
		a=1;
		b=2;
	}
	for(int h=0;h<n;h++)
	{
		my_printf("%.3lf\n",s[h]);
	}
	return 0;
}
