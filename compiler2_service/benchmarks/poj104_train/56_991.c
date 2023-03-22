#define NUM_ITER 1067573

#include <header.h>

int main_bench(){
	int a,b,c,d,e,f,g;
	my_scanf("%d",&a);
	b=a/10000;
	c=a/1000-b*10;
	d=a/100-c*10-b*100;
	e=a/10-d*10-c*100-b*1000;
	f=a%10;
	g=b+c*10+d*100+e*1000+f*10000;
	if(b==0){g=g/10;}
    if(c==0){g=g/10;}
    if(d==0){g=g/10;}
    if(e==0){g=g/10;}
    if(f==0){g=g/10;}
my_printf("%d",g);
	return 0;
}