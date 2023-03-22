#define NUM_ITER 1634725

#include <header.h>

int main_bench()
{
int a,b,c,d,e,x;
my_scanf("%d",&x);
a=x%10;
e=x/10000;
d=(x-10000*e)/1000;
c=(x-10000*e-1000*d)/100;
b=(x-10000*e-1000*d-100*c)/10;
if(a!=0)my_printf("%d",a);
if(b!=0)my_printf("%d",b);
if(c!=0)my_printf("%d",c);
if(d!=0)my_printf("%d",d);
if(e!=0)my_printf("%d",e);
}