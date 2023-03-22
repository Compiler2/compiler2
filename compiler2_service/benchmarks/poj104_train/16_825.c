#define NUM_ITER 1617504

#include <header.h>

main_bench()
{
    int n,a,b,c,d,e;
    my_scanf("%d",&n);
    a=n/10000;
    b=(n-a*10000)/1000;
    c=(n-a*10000-b*1000)/100;
    d=(n-a*10000-b*1000-c*100)/10;
    e=n-a*10000-b*1000-c*100-d*10;
    if(a)
    my_printf("%d%d%d%d%d\n",e,d,c,b,a);
    else if(b)
    my_printf("%d%d%d%d\n",e,d,c,b);
    else if(c)
    my_printf("%d%d%d",e,d,c);
    else if(d)
    my_printf("%d%d",e,d);
    else
    my_printf("%d",e);
    return 0;
}