#include <header.h>

int main_bench()
{
	float a[1000],b[1000];
	int n,i;
	my_scanf("%d\n",&n);
	my_scanf("%f %f\n",&a[0],&b[0]);
	for(i=1;i<n;i++){
		my_scanf("%f %f\n",&a[i],&b[i]);
		if((b[i]/a[i]-b[0]/a[0])>0.05){
			my_printf("better\n");
		}
		else if((b[0]/a[0]-b[i]/a[i])>0.05){
			my_printf("worse\n");
		}
		else{
			my_printf("same\n");
		}
	}
	return 0;
}