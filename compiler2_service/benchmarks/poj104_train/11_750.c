#define NUM_ITER 1108720

#include <header.h>

int main_bench()
{
	int a,b,c,d=0;
	my_scanf("%d %d %d",&a,&b,&c);
	if(b>=2) d=d+31; 
	if(b>=3) d=d+28;
	if(b>=4) d=d+31;
	if(b>=5) d=d+30;
	if(b>=6) d=d+31;
	if(b>=7) d=d+30;
	if(b>=8) d=d+31;
	if(b>=9) d=d+31;
	if(b>=10) d=d+30;
	if(b>=11) d=d+31;
	if(b>=12) d=d+31;
	d=d+c;
	if(((a%4==0&&a%100!=0)||(a%400==0))&&b>2)
		d=d+1;
	my_printf("%d",d);
}