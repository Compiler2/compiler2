#define NUM_ITER 58373

#include <header.h>

int main_bench()
{
int a,b,c,n;
my_scanf("%d\n",&n);
my_scanf("%d\n",&a);
my_scanf("%d\n",&b);

while(n!=2)
{
my_scanf("%d\n",&c);
if (a>=b)
if (a>=c)
if (b>=c)
a=a; 
else b=c;
else
{b=a;
a=c;}
else 
if (a>=c)
{c=b;b=a;a=c;}
else
if(b>=c)
{a=b;b=c;}
else
a=c;

n=n-1;
}
my_printf("%d\n",a);
my_printf("%d\n",b);
}