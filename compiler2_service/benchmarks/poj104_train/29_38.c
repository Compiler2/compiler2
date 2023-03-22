#define NUM_ITER 4234

#include <header.h>

int main_bench()
{
	int m,i,n[1000];
	my_scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		my_scanf("%d",&(n[i]));
	}
	int sz[1000];
	double xsz[1000];
	sz[0]=1;
	sz[1]=2;
	xsz[0]=(sz[1])/(sz[0]);
	int k;
	double sum[1000];
	for(i=0;i<m;i++)
	{
		sum[i]=xsz[0];
		for(k=1;k<(n[i]);k++)
		{
			sz[k+1]=sz[k]+sz[k-1];
		    xsz[k]=(sz[k+1])*1.0/(sz[k]);
			sum[i]+=xsz[k];
		}
		my_printf("%.3lf\n",sum[i]);
	}
	return 0;
}