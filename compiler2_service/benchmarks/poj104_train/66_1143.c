#include <header.h>

int main_bench()
{
int a,b,c,i,d,e=0;
int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
i=0;
my_scanf("%d %d %d",&a,&b,&c);
	i=a-1+(a-1)/4+(a-1)/400-(a-1)/100;
if(a%400==0||a%4==0&&a%100!=0)
m[2]=29;
else
m[2]=28;
for(e=0;e<b;e++)
{
	i+=m[e];
}
i=i+c;
d=i%7;
if(d==1)
{
	my_printf("Mon.\n");
}
if(d==2)
{
	my_printf("Tue.\n");
}
if(d==3)
{
	my_printf("Wed.\n");
}
if(d==4)
{
	my_printf("Thu.\n");
}
if(d==5)
{
	my_printf("Fri.\n");
}
if(d==6)
{
	my_printf("Sat.\n");
}
if(d==0)
{
	my_printf("Sun.\n");
}
return 0;
}
