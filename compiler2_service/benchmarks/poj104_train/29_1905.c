#define NUM_ITER 2880

#include <header.h>

int main_bench()
{
	int i,n,m;
	double s,f[100];
	my_scanf("%d",&m);
	while(m--)
	{
	my_scanf("%d",&n);

	f[1]=1;f[2]=2;
	for(i=3;i<=n+1;i++) 
	{
		f[i]=f[i-2]+f[i-1];
	}
	s=0;
	for(i=1;i<=n;i++)
	{
		s+=f[i+1]/f[i];
	}

    my_printf("%.3lf\n",s);
	}
	return 0;
}