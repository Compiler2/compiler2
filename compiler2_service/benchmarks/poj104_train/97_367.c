#define NUM_ITER 1122907

#include <header.h>

int main_bench()
{
    int n,a,b,c,d,e,f;
    my_scanf("%d",&n);
    my_printf("%d\n",n/100);
    a=n%100;
    my_printf("%d\n",a/50);
    b=a%50;
    my_printf("%d\n",b/20);
    c=b%20;
    my_printf("%d\n",c/10);
    d=c%10;
    my_printf("%d\n",d/5);
    e=d%5;
    my_printf("%d\n",e/1);
    return 0;
}
