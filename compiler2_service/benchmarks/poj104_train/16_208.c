#include <header.h>

int main_bench()
{ 
 int a,b,c,d,e,f,g;
 my_scanf("%d",&a);
b=a/10000;
c=(a-b*10000)/1000;
d=a/100-(a/1000)*10;
e=a/10-(a/100)*10;
f=a-(a/10)*10;
if(b!=0)
{g=f*10000+e*1000+d*100+c*10+b;
my_printf("%05d",g);}
else 
if(c!=0)
{g=f*1000+e*100+d*10+c;
my_printf("%04d",g);}
else
if(d!=0)
{g=f*100+e*10+d;
my_printf("%03d",g);}
else
if(e!=0)
{g=f*10+e;
my_printf("%01d",g);}
else
{g=f;
my_printf("%d",g);}
return 0;
}