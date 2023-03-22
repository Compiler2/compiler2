#define NUM_ITER 1108530

#include <header.h>

int main_bench()
{
int a[13]={0,0,31,59,90,120,151,181,212,243,273,304,334};
int y,m,d,x,x1,x2,x3,q;
my_scanf("%d%d%d",&y,&m,&d);
x1=(y-1)/4;
x2=(y-1)/100;
x3=(y-1)/400;
x=(y-1)+a[m]+d+(x1-x2+x3);
if((y%4==0&&y%100!=0)||(y%400==0)&&(a[m]>59 ))
{x=x+1;}

q=x%7;
switch(q)
{
case 1:
	 {
	 my_printf("Mon.");
		 break;
	 }
case 2:
	 {
	 my_printf("Tue.");
		 break;
	 }
case 3:
	 {
	 my_printf("Wed.");
		 break;
	 }
case 4:
	 {
	 my_printf("Thu.");
		 break;
	 }
case 5:
	 {
	 my_printf("Fri.");
		 break;
	 }
case 6:
	 {
	 my_printf("Sat.");
		 break;
	 }
case 0:
	 {
	 my_printf("Sun.");                                                   
		 break;
	 }



}



return 0;
}