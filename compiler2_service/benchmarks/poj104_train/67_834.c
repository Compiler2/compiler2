#define NUM_ITER 27369

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	float all[100],fun[100],per[100];
	int i;
	for(i=0;i<n;i++){
		my_scanf("%f%f",&all[i],&fun[i]);
		per[i]=fun[i]/all[i];
	}
	for(i=1;i<n-1;i++){
		if(per[i]>=per[0]){
			if(per[i]-per[0]>0.05) {my_printf("better\n");}
			else {my_printf("same\n");}
		}
		if(per[i]<per[0]){
			if(per[0]-per[i]>0.05) {my_printf("worse\n");}
			else {my_printf("same\n");}
		}
	}
	if(per[n-1]>=per[0]){
			if(per[i]-per[0]>0.05) {my_printf("better");}
			else {my_printf("same");}
		}
		if(per[n-1]<per[0]){
			if(per[0]-per[i]>0.05) {my_printf("worse");}
			else {my_printf("same");}
		}
	return 0;
}
	