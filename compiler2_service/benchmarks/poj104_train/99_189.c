#define NUM_ITER 945671

#include <header.h>

int main_bench(){
	double n,age[99],num1=0.00,num2=0.00,num3=0.00,num4=0.00;
	int i;
	double p1,p2,p3,p4;
	my_scanf("%lf",&n);
	for(i=0;i<n;i++){
		my_scanf("%lf",&age[i]);
	}
	for(i=0;i<n;i++){
		if(age[i]<=18){
			num1+=1;
		}
		if((age[i]>=19)&&(age[i]<=35)){
			num2+=1;
		}
		if((age[i]>=36)&&(age[i]<=60)){
			num3+=1;
		}
		if(age[i]>=61){
			num4+=1;
		}
	}
	p1=100*num1/n;
	p2=100*num2/n;
	p3=100*num3/n;
	p4=100*num4/n;
	my_printf("1-18: %.2lf%%\n",p1);
	my_printf("19-35: %.2lf%%\n",p2);
	my_printf("36-60: %.2lf%%\n",p3);
	my_printf("60??: %.2lf%%\n",p4);
	return 0;
}