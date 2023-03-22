#define NUM_ITER 54065

#include <header.h>

int main_bench(){
	int n;
	int a;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	my_scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		my_scanf("%d",&a);
		if(a<=18){
			b=b+1;
		}else if(a>=19&&a<=35){
			c=c+1;
		}else if(a>=36&&a<=60){
			d=d+1;
		}else if(a>60){
			e=e+1;
		}
	}
	double f,g,h,k;
	f=1.0*b/n*100;
	g=1.0*c/n*100;
	h=1.0*d/n*100;
	k=1.0*e/n*100;
	my_printf("1-18: ");
	my_printf("%.2lf%%\n",f);
	my_printf("19-35: ");
	my_printf("%.2lf%%\n",g);
	my_printf("36-60: ");
	my_printf("%.2lf%%\n",h);
	my_printf("60??: ");
	my_printf("%.2lf%%\n",k);
	return 0;
}


