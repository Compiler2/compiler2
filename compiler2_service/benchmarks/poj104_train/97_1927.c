#define NUM_ITER 1002123

#include <header.h>


int main_bench()
{
int n,a,b,c,d,e,f;
int i1,i2,i3,i4,i5;
my_scanf("%d",&n);
i1=n%100;
a=(n-i1)/100;

n=n-100*a;
i2=n%50;
b=(n-i2)/50;

n=n-50*b;
i3=n%20;
c=(n-i3)/20;

n=n-20*c;
i4=n%10;
d=(n-i4)/10;

n=n-10*d;
i5=n%5;
e=(n-i5)/5;

n=n-5*e;
f=n;
my_printf("%d\n",a);
my_printf("%d\n",b);
my_printf("%d\n",c);
my_printf("%d\n",d);
my_printf("%d\n",e);
my_printf("%d\n",f);


return 0;
}