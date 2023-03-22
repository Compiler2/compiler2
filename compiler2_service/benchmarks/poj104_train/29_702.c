#define NUM_ITER 4666

#include <header.h>

int main_bench()
{
	int i,j,k;
	int m;
	int n[1000];
    double sum=3.500;
	double a=3,b=5,t;
	my_scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		my_scanf("%d",&n[i]);
	}
	for(j=0;j<m;j++)
	{
		if(n[j]==1)
		{
			my_printf("2.000\n");
		}
		if(n[j]==2)
		{
			my_printf("3.500\n");
		}
		if(n[j]>2)
		{
			for(k=3;k<=n[j];k++)
			{
				sum+=b/a;
				t=a;
				a=b;
				b=t+b;
			}
			my_printf("%.3lf\n",sum);
		}
		sum=3.500;
		a=3,b=5;
	}
	return 0;
}
				

				

		
		