#include <header.h>

int main_bench()
{
	int n[1000],m,i,j;
	double jg[100], sum[1000];
	my_scanf("%d", &m);
	for(i=0;i<m;i++)
	{
		my_scanf("%d", &n[i]);
	}
	for(i=0;i<m;i++)
	{
		jg[0]=2*1.0/1;
		sum[i]=jg[0];
		for(j=0;j<n[i]-1;j++)
		{
			jg[j+1]=1+(1*1.0/jg[j]);
			sum[i]+=jg[j+1];	
		}
		my_printf("%.3lf\n", sum[i]);
	}
	return 0;
}