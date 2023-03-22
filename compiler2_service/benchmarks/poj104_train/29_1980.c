#define NUM_ITER 4681

#include <header.h>

int main_bench()
{
	int a[1000],i,m,n,j;
	float s=0;
	a[0]=1;
	a[1]=1;
	my_scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		my_scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			a[j+1]=a[j]+a[j-1];
			s=s+(float)a[j+1]/a[j];
		}
		my_printf("%.3f\n",s);
		s=0;
	}
	return 0;
}