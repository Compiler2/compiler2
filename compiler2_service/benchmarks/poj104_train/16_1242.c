#define NUM_ITER 1745244

#include <header.h>

int main_bench()
{
int a,b,c,d,e;
my_scanf("%d",&a);
b=a/1000;
c=(a-1000*b)/100;
d=(a-1000*b-100*c)/10;
e=a-1000*b-100*c-10*d;
if (a==10000) my_printf("00001");
else b!=0?my_printf("%d%d%d%d",e,d,c,b):c!=0?my_printf("%d%d%d",e,d,c):d!=0?my_printf("%d%d",e,d):my_printf("%d",e);


return 0;
}