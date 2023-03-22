#define NUM_ITER 1945818

#include <header.h>



int main_bench()
{
    int a,b,c,d,f,e,g,h;
	my_scanf("%d",&a);
	if(a>=1&&a<10)
		my_printf("%d",a);
	if(a>10&&a<100){
		b=a%10;
		c=a/10;
		d=10*b+c;
		my_printf("%d",d);
	}
	if(a>100&&a<1000){
	    b=a%10;
		c=(a%100)/10;
		d=a/100;
		e=100*b+10*c+d;
		my_printf("%d",e);
	}
	if(a>1000&&a<10000){
		b=a%10;
		c=(a%100)/10;
		d=(a%1000)/100;
		e=a/1000;
		f=1000*b+100*c+10*d+e;
		my_printf("%d",f);
	}
	if(a>10000&&a<100000){
        b=a%10;
		c=(a%100)/10;
		d=(a%1000)/100;
		e=(a%10000)/1000;
		f=a/10000;
		g=b*10000+c*1000+d*100+e*10+f;
		my_printf("%d",g);
	}
		

	
	return 0;
}

