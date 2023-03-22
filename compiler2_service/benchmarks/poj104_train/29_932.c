#define NUM_ITER 2857

#include <header.h>

int main_bench()
{
	int m,i,j,n[1000];
	double t,k,l;
	my_scanf("%d",&m);
	for(i=0;i<m;i++)my_scanf("%d",&n[i]);
    for(i=0;i<m;i++)
	{
		t=0;k=2;l=1;
		for(j=0;j<n[i];j++)
		{
			t=t+k/l;
			k=k+l;
			l=k-l;

		}
		my_printf("%.3lf\n",t);
	}
	return 0;
}
