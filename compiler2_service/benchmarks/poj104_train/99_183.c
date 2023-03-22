#define NUM_ITER 47279

#include <header.h>

int main_bench(){
	int n,i,e=0,d=0,f=0,g=0,k=0,a;
	my_scanf("%d",&n);
	for (i=0;i<n;i++){
		my_scanf("%d",&a);
		if(a<=18){
			e++;
		}
		if(a>=19&&a<=35){
			d++;
		}
		if(a>=36&&a<=60){
			f++;
		}
		if(a>=61) {
			g++;
		}
	}
	k=e+d+f+g;
	double x,y,z,w;
	x=(double)e/k*100;
    y=(double)d/k*100;
    z=(double)f/k*100;
    w=(double)g/k*100;
	my_printf("1-18: %.2lf%%\n",x);
    my_printf("19-35: %.2lf%%\n",y);
    my_printf("36-60: %.2lf%%\n",z);
    my_printf("60??: %.2lf%%\n",w);
	return 0;
}
		