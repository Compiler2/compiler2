#include <header.h>

int main_bench()
{
	int n,i;
	int a[100],b[100];
	double c[100];
	my_scanf("%d",&n);
	my_scanf("%d %d",&a[0],&b[0]);
	for(i=1;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		c[i]=(double)b[i]/a[i];
	}
	if(c[1]-c[0]>0.05){
		my_printf("better");
	}
	else if(c[0]-c[1]>0.05){
		my_printf("worse");
	}
	else{
		my_printf("same");
	}
	for(i=2;i<n;i++){
		my_printf("\n");
		if(c[i]-c[0]>0.05){
			my_printf("better");
		}
		else if(c[0]-c[i]>0.05){
			my_printf("worse");
		}
		else{
			my_printf("same");
		}
	}
	return 0;
}