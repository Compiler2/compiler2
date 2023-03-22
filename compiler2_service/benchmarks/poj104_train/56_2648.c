#define NUM_ITER 1640446

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,g,h,i,j,k;
	my_scanf("%d",&a);
		if (a/10==0) { b=a; my_printf("%d",b);}
		else if (a/100==0) {c=a/10; b=a-c*10;g=b;h=c;my_printf("%d%d",g,h);}

		else if (a/1000==0){ d=a/100 ;c=(a-100*d)/10; b=a-d*100-c*10;g=b;h=c;i=d;my_printf("%d%d%d",g,h,i);}

		else if (a/10000==0){ e=a/1000 ;d=(a-1000*e)/100 ; c=(a-1000*e-d*100)/10; b=a-1000*e-100*d-10*c;g=b;h=c;i=d;j=e;my_printf("%d%d%d%d",g,h,i,j);}
		else if (a/100000==0){ f=a/10000; e=(a-10000*f)/1000; d=(a-10000*f-1000*e)/100 ;c=(a-10000*f-1000*e-100*d)/10; b=a-10000*f-1000*e-100*d-10*c;g=b;h=c;i=d;j=e;k=f;my_printf("%d%d%d%d%d",g,h,i,j,k);}




}
	