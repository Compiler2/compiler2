#define NUM_ITER 1064148

#include <header.h>

int main_bench()
{
int y,m,d,hh;
int pn,rn,sum;
int a,b,c,nianq;
my_scanf("%d%d%d",&y,&m,&d);
a=(y-1)/4;
b=(y-1)/100;
c=(y-1)/400;
rn=a-b+c;
pn=(y-1)-rn;
nianq=rn*2+pn*1;
if(y%400==0||(y%100!=0&&y%4==0)){
	if(m==1){hh=d;}
	if(m==2){hh=31+d;}
	if(m==3){hh=60+d;}
	if(m==4){hh=91+d;}
	if(m==5){hh=121+d;}
	if(m==6){hh=152+d;}
	if(m==7){hh=182+d;}
	if(m==8){hh=213+d;}
	if(m==9){hh=244+d;}
	if(m==10){hh=274+d;}
	if(m==11){hh=305+d;}
	if(m==12){hh=335+d;}
}
else 
{
	if(m==1){hh=d;}
	if(m==2){hh=31+d;}
	if(m==3){hh=59+d;}
	if(m==4){hh=90+d;}
	if(m==5){hh=120+d;}
	if(m==6){hh=151+d;}
	if(m==7){hh=181+d;}
	if(m==8){hh=212+d;}
	if(m==9){hh=243+d;}
	if(m==10){hh=273+d;}
	if(m==11){hh=304+d;}
	if(m==12){hh=334+d;}
}
sum=(hh+nianq)%7;
if(sum==0){my_printf("Sun.");}
if(sum==1){my_printf("Mon.");}
if(sum==2){my_printf("Tue.");}
if(sum==3){my_printf("Wed.");}
if(sum==4){my_printf("Thu.");}
if(sum==5){my_printf("Fri.");}
if(sum==6){my_printf("Sat.");}
return 0;
}