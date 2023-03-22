#include <header.h>


int main_bench()
{
	double a[100],b[100];
	int i,j,k,n;
	double c[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%lf%lf",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		c[i]=(b[i]/a[i])*100;
	}
	for(i=1;i<n;i++){
		if(c[i]-c[0]>5){
			my_printf("better\n");
		}
		if(c[0]-c[i]>5){
			my_printf("worse\n");
		}
		if(c[i]-c[0]<=5&&c[0]-c[i]<=5){
			my_printf("same\n");
		}
	}
	return 0;
}
