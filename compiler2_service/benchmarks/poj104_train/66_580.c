#define NUM_ITER 977528

#include <header.h>

int main_bench()
{

int a,b,c;
my_scanf("%d %d %d",&a,&b,&c);
int temp=0;
temp=((a-1)*(365%7)+(a-1)/4-(a-1)/100+(a-1)/400)%7;
if (b==1) temp=temp+0;
if (b==2) temp=temp+3;
if (b==3) temp=temp+3;
if (b==4) temp=temp+6;
if (b==5) temp=temp+1;
if (b==6) temp=temp+4;
if (b==7) temp=temp+6;
if (b==8) temp=temp+2;
if (b==9) temp=temp+5;
if (b==10) temp=temp+0;
if (b==11) temp=temp+3;
if (b==12) temp=temp+5;

if (((a%400==0)||((a%4==0)&&(a%100!=0)))&&(b>2))
temp++;
temp=(temp+c-1)%7;
if (temp==0) my_printf("Mon.");
if (temp==1) my_printf("Tue.");
if (temp==2) my_printf("Wed.");
if (temp==3) my_printf("Thu.");
if (temp==4) my_printf("Fri.");
if (temp==5) my_printf("Sat.");
if (temp==6) my_printf("Sun.");
}