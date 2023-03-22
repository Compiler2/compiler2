#define NUM_ITER 54074

#include <header.h>

int main_bench(){
	int n,a,b,c,d,x,i;
	double e,f,g,h;
	a=0; 
	b=0; 
	c=0; 
	d=0;
    my_scanf("%d\n",&n);
	for(i=1;i<=n;i+=1){
    my_scanf("%d",&x);
	if(x<=18)
		a+=1;
	else if(x>=19&&x<=35)
		b+=1;
	else if(x>=36&&x<=60)
		c+=1;
	else if(x>=61)
		d+=1;
	}
	e=100*1.0*a/n;
	f=100*1.0*b/n;
	g=100*1.0*c/n;
	h=100*1.0*d/n;
	my_printf("1-18: %.2lf%%\n",e);
	my_printf("19-35: %.2lf%%\n",f);
    my_printf("36-60: %.2lf%%\n",g);
    my_printf("60??: %.2lf%%\n",h);
	return 0;
}