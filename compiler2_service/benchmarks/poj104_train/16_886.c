#define NUM_ITER 1625595

#include <header.h>

int main_bench()
{
int x,a,b,c,d,e;
my_scanf("%d",&x);
a=x/10000;
b=(x-a*10000)/1000;
c=(x-a*10000-b*1000)/100;
d=(x-a*10000-b*1000-c*100)/10;
e=x-a*10000-b*1000-c*100-d*10;
if (x>=10000&&x<=99999)
my_printf("%d%d%d%d%d",e,d,c,b,a);
else if (x>=1000&&x<=9999)
my_printf("%d%d%d%d",e,d,c,b);
else if (x>=100&&x<=999)
my_printf("%d%d%d",e,d,c);
else if (x>=10&&x<=99)
my_printf("%d%d",e,d);
else my_printf("%d",e);
return 0;

}

