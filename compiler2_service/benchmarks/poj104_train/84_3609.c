#define NUM_ITER 55598

#include <header.h>

int main_bench()
{int n,a,b,c,i;
my_scanf("%d\n",&n);
my_scanf("%d\n%d\n",&a,&b);
if(b>a)
{
c=a;
a=b;
b=c;
}
for(i=1;i<=n-2;i++)
{
my_scanf("%d\n",&c);
if(c>a)
{b=a;
a=c;}
else if(c>b)
b=c;
}
my_printf("%d\n%d\n",a,b);
return 0;
}
