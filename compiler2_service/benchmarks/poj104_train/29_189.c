#define NUM_ITER 44048

#include <header.h>


int main_bench(){
	float sz[100];
	int x,y,z,n,a[100],b[100],sc[100];

    sz[0] = (float)2/1;
	a[0]=2;
	b[0]=1;
	int i=1;
	while(i<100){
		a[i]=a[i-1]+b[i-1];
		b[i]=a[i-1];
        sz[i] = sz[i-1] + (float)(a[i])/(b[i]);
		i++;
	}

	my_scanf("%d",&n);
	int o,j=0;
	while(j<n){
		my_scanf("%d",&sc[j]);
		o=sc[j]-1;
		my_printf("%.3f\n",sz[o]);
		j++;
	}

	return 0;

}