#define NUM_ITER 1253168

#include <header.h>

int main_bench()
{
int n,a,b,c,d,e,f;
my_scanf("%d",&n);
a=n/100;
b=(n-n/100*100)/50;
c=(n-(a*100+b*50))/20;
d=(n-(a*100+b*50+c*20))/10;
e=(n-n/10*10)/5;
f=(n-n/5*5);
my_printf("%d\n",a);
my_printf("%d\n",b);
my_printf("%d\n",c);
my_printf("%d\n",d);
my_printf("%d\n",e);
my_printf("%d\n",f);

return 0;
}