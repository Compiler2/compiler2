#define NUM_ITER 35921

#include <header.h>


int main_bench()
{	int i,n,a[100],b[100];
	float c[100];
	my_scanf("%d",&n);
	my_scanf("%d%d",&a[0],&b[0]);
	c[0]=(float)b[0]/(float)a[0];
	for(i=1;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
		c[i]=(float)b[i]/(float)a[i];
	}
	for(i=1;i<n;i++){
		if(c[i]-c[0]>0.05)
			my_printf("better\n");
		else if(c[0]-c[i]>0.05)
			my_printf("worse\n");
		else
			my_printf("same\n");
	}
	return 0;
}