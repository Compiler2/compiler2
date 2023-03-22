#include <header.h>

int main_bench(){
	int n;
	int age;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	double aa;
	double bb;
	double cc;
	double dd;
	int i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&age);
		if(age<=18){
			a+=1;
		}
		else if(age<=35){
			b+=1;
		}
		else if(age<=60){
			c+=1;
		}
		else{
			d+=1;
		}
	}
	aa=a*100.0/n;
	bb=b*100.0/n;
	cc=c*100.0/n;
	dd=d*100.0/n;
	my_printf("1-18: %.2lf%%\n",aa);
	my_printf("19-35: %.2lf%%\n",bb);
	my_printf("36-60: %.2lf%%\n",cc);
	my_printf("60??: %.2lf%%\n",dd);
	return 0;
}