#include <header.h>

int main_bench()
{
	int n,i,j;
	double a,b;
	my_scanf("%d",&n);
	double*s=(double*)malloc(sizeof(double)*n);
	double*z=(double*)malloc(sizeof(double)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d",&s[i],&z[i]);
	}
	for(i=1;i<n;i++)
	{
		a=z[0]*1000/s[0];
		b=z[i]*1000/s[i];
		if(b-a>50)
			{
				my_printf("better\n");
			}
		else if(a-b>50)
		{
			my_printf("worse\n");
		}
		else {
			my_printf("same\n");
		}

		
	}
		return 0;
}