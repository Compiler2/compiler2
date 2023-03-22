#define NUM_ITER 87

#include <header.h>

int main_bench()
{
	int m,n[1000],i,j,l,e,a=2,b=1;
	double s[1000]={0},t[1000]={0};
	my_scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		my_scanf("%d",&n[i]);
	}
    for(i=0;i<m;i++)
	{
		for(j=0;j<n[i];j++)
		{
			a=2;
			b=1;
			for(l=0;l<n[i];l++)
			{
                t[l]=1.0*a/b;
				e=a;
				a=a+b;
				b=e;
			}
			s[i]+=t[j];
		}
	}
	for(i=0;i<m;i++)
	{
		my_printf("%.3lf\n",s[i]);
	}
	return 0;
}