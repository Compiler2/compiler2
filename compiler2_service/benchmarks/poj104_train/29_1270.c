#define NUM_ITER 5299

#include <header.h>

int main_bench()
{
	int m,i,j,c;
	int a,b;
	double s;
	my_scanf("%d",&m);
	int *sz=(int*)malloc(sizeof(int)*m);
	for(i=0;i<m;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<m;i++)
	{
		s=0.0;
		a=2;
		b=1;
		for(j=0;j<sz[i];j++)
		{
			s+=((1.0*a)/b);
			c=a+b;
			b=a;
			a=c;
			c=0;
		}
		my_printf("%.3lf\n",s);
	}
	return 0;
}