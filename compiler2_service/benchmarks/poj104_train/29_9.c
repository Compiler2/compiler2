#define NUM_ITER 4290

#include <header.h>

int main_bench(){
	double he[100]={0},a[100],b[100];
	int n,i,j,sz[100];
	a[0]=2,b[0]=1;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	my_scanf("%d",&sz[i]);
	}
	for(j=0;j<n;j++){
		he[j]=2;
	for(i=1;i<sz[j];i++){
		a[i]=a[i-1]+b[i-1];
		b[i]=a[i-1];
		he[j]+=a[i]/b[i];
	}
	}
	for(j=0;j<n;j++){
	my_printf("%.3lf\n",he[j]);
	}
	

	return 0;
}