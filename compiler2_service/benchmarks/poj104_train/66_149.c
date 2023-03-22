#include <header.h>

int main_bench()
{
unsigned int a,b,c,n,d,D,x;
my_scanf("%d%d%d",&a,&b,&c);
if((a%4==0&&a%100!=0)||a%400==0)
{
switch(b)
{
case 1: d=0;break;
case 2: d=31;break;
case 3: d=60;break;
case 4: d=91;break;
case 5: d=121;break;
case 6: d=152;break;
case 7: d=182;break;
case 8: d=213;break;
case 9: d=244;break;
case 10: d=274;break;
case 11: d=305;break;
case 12: d=335;break;
}
n=d+c;
D=(a-1)+(a-1)/4-(a-1)/100+(a-1)/400 +n;
x=D%7;
}
else
{
switch(b)
{
case 1: d=0;break;
case 2: d=31;break;
case 3: d=59;break;
case 4: d=90;break;
case 5: d=120;break;
case 6: d=151;break;
case 7: d=181;break;
case 8: d=212;break;
case 9: d=243;break;
case 10: d=273;break;
case 11: d=304;break;
case 12: d=334;break;
}
n=d+c;
D=(a-1)+(a-1)/4-(a-1)/100+(a-1)/400 +n;
x=D%7;
}
switch(x)
{
case 1: my_printf("Mon.");break;
case 2: my_printf("Tue.");break;
case 3: my_printf("Wed.");break;
case 4: my_printf("Thu.");break;
case 5: my_printf("Fri.");break;
case 6: my_printf("Sat.");break;
case 0: my_printf("Sun.");break;
}
return 0;
}

 