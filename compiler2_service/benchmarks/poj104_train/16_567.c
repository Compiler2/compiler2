#include <header.h>

int main_bench()
{
int x,a,b,c,d,e;
my_scanf("%d",&x);
a=x/10000;
b=x%10000/1000;
c=x%1000/100;
d=x%100/10;
e=x%10;
if(x>9999)
my_printf("%d%d%d%d%d",e,d,c,b,a);
else
if(x>999)
my_printf("%d%d%d%d",e,d,c,b);
else
if(x>99)
my_printf("%d%d%d",e,d,c);
else
if(x>9)
my_printf("%d%d",e,d);
else
my_printf("%d",e);
return 0;
}
