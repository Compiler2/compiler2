#define NUM_ITER 4258

#include <header.h>


int main_bench()
{
	double a[100],b[100],sum=0;
	int m,n;
	a[0]=2;
	a[1]=3;
	b[0]=1;
	b[1]=2;
	my_scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		my_scanf("%d",&n);
		if(n==1)
		{
			sum=2.000;
		}
		else if(n==2)
		{
			sum=3.500;
		}
		else
		{
			sum=3.500;
			for(int q=2;q<n;q++)
			{
				a[q]=a[q-1]+a[q-2];
				b[q]=b[q-1]+b[q-2];
				sum+=a[q]/b[q];
			}
		}
		my_printf("%.3lf\n",sum);
	}
        


	return 0;
}