#define NUM_ITER 55895

#include <header.h>


int main_bench(){
	int n,i,a,x=0,y=0,z=0,w=0;
	double b,c,d,e;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a);
        if(a<=18){
           x++;
		}else if(a>=19&&a<=35){
			y++;
		}else if(a>=36&&a<=60){
			z++;
		}else if(a>=61){
			w++;
		}
	}
	b=100*1.0*x/n;
	c=100*1.0*y/n;
	d=100*1.0*z/n;
	e=100*1.0*w/n;
	my_printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",b,c,d,e);
	return 0;
}