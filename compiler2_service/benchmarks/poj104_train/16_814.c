#define NUM_ITER 1420320

#include <header.h>

int main_bench()
{
    int x,a,b,c,d,e;
    my_scanf("%d",&x);
    a=x/10000;
    b=(x%10000)/1000;
    c=(x%1000)/100;
    d=(x%100)/10;
    e=x%10;
    my_printf("%d",e);
    if(d||c||b||a) my_printf("%d",d);
    if(c||b||a) my_printf("%d",c);
    if(b||a) my_printf("%d",b);
    if(a) my_printf("%d",a);
    return 0;
}
