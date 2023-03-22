#define NUM_ITER 34807

#include <header.h>

int main_bench()
{
	int n,i,a[100],b[100];
	double c[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);}
	c[0]=(double)b[0]/a[0];
	for(i=1;i<n;i++){
		c[i]=(double)b[i]/a[i];
		if((double)(c[i]-c[0])>0.05)
			my_printf("better\n");
		if((double)(c[i]-c[0])<-0.05)
			my_printf("worse\n");
		if((double)(c[i]-c[0]<=0.05)&&(double)(c[i]-c[0])>=-0.05)
			my_printf("same\n");
	}
	return 0;
}
