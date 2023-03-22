#define NUM_ITER 1126639

#include <header.h>

int main_bench(){
	int x,a,b,q,w,r,t,y,c,d,e,f,g,h;
	my_scanf("%d",&x);
	c=x%100;
	d=c%50;
	e=d%20;
	f=e%10;
	g=f%5;
	h=g%2;
	a=(x-c)/100;
	b=(c-d)/50;
    q=(d-e)/20;
	w=(e-f)/10;
	r=(f-g)/5;
	t=(g-h)/2;
	y=h;
	 my_printf("%d\n\n",a);		 	 
	 my_printf("%d\n\n",b);
	 my_printf("%d\n\n",q);
	 my_printf("%d\n\n",w);	 
	 my_printf("%d\n\n",r);
	 my_printf("%d\n\n",g);
	 return 0;
}