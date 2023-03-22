#define NUM_ITER 3651

#include <header.h>

int main_bench(){
	double a[1000],b[1000],c[1000];
	int i;

	a[0]=2;
	a[1]=3;
	for(i=2;i<1000;i++){
		a[i]=a[i-1]+a[i-2];
	}
	b[0]=1;
	b[1]=2;
	for(i=2;i<1000;i++){
		b[i]=b[i-1]+b[i-2];
	}
	for(i=0;i<1000;i++){
		c[i]=a[i]/b[i];
	}

	int m,n,j;
	double sum=0;
	my_scanf("%d",&m);
	for(i=1;i<=m;i++){
		my_scanf("%d",&n);
		for(j=0;j<n;j++){
			sum+=c[j];
		}
		my_printf("%.3lf\n",sum);
		sum=0;
	}
	
	return 0;
}