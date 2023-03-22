#include <header.h>

int main_bench()
{
int ace,a,b,c,d;
my_scanf("%d",&ace);
a=(int)(ace/1000);
b=(int)((ace-1000*a)/100);
c=(int)((ace-1000*a-100*b)/10);
d=(ace-1000*a-100*b-10*c);

if(ace>=1000) my_printf("%d%d%d%d",d,c,b,a);
else 
if (ace>=100) my_printf("%d%d%d",d,c,b);
else 
if (ace>=10) my_printf("%d%d",d,c);
else 
my_printf("%d",d);

}
