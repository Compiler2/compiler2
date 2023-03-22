#define NUM_ITER 55328

#include <header.h>

int main_bench(){
    int n,y,i=1;
    double a=0,b=0,c=0,d=0,e,f,g,h;
	my_scanf("%d/n",&n);
	while(i<=n){
        my_scanf("%d",&y);
		if(y>=1&&y<=18){
			a=a+1;
		}
        if(y>=19&&y<=35){
			b=b+1;
		}
        if(y>=36&&y<=60){
			c=c+1;
		}
		if(y>=61){
			d=d+1;
		}
        i++;
	}
	e=1.0*a/n*100;
	f=1.0*b/n*100;
	g=1.0*c/n*100;
	h=1.0*d/n*100;
    my_printf("1-18: %.2lf%%\n",e);
    my_printf("19-35: %.2lf%%\n",f);
    my_printf("36-60: %.2lf%%\n",g);
    my_printf("60??: %.2lf%%\n",h);
	return 0;
}
