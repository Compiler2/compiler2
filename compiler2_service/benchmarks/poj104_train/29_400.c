#define NUM_ITER 4593

#include <header.h>


int main_bench()
{
	int m,sz[100],i,sl[500],j;
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		my_scanf("%d",&sz[i]);
	}
	sl[0]=1;
	sl[1]=2;
	for(i=2;i<500;i++){
		sl[i]=sl[i-1]+sl[i-2];
	}
	double fs[500],sum[500]={0};
	for(i=0;i<500;i++){
		fs[i]=(double)sl[i+1]/sl[i];
	}
	for(i=0;i<m;i++){
		for(j=0;j<sz[i];j++){
			sum[i]=fs[j]+sum[i];
		}
		my_printf("%.3lf\n",sum[i]);
	}

	

	return 0;
}