#define NUM_ITER 5257

#include <header.h>

int main_bench()
{
	int a=2,b=1,e,m,n,i,j;
	double c[100];
    my_scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		my_scanf("%d",&n);
		c[i] = 0.0 ;
		for(j=0;j<n;j++)
		{
			c[i]=c[i]+1.0*a/b;
			
			e=a;
			a=a+b;
			b=e;
		}
		a=2;
		b=1;
	
	}
	for(i=0;i<m-1;i++)
	{
		my_printf("%.3lf\n",c[i]);
	}
	my_printf("%.3lf",c[i]);	
return 0;
}