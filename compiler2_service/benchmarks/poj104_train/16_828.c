#include <header.h>

int main_bench()
{
int a,b,c,d,e;
my_scanf("%d",&a);
if(a<10)my_printf("%d",a);
else if (a<100)
{b=(int)a/10;
c=a-b*10;
my_printf("%d%d",c,b);}
else if(a<1000)
{b=(int)a/100;c=(int)(a-100*b)/10;d=a-100*b-10*c;my_printf("%d%d%d",d,c,b);}
else if(a<10000)
{b=(int)a/1000;c=(int)(a-1000*b)/100;d=(int)(a-1000*b-100*c)/10;
e=a-1000*b-100*c-10*d;my_printf("%d%d%d%d",e,d,c,b);}
else if(a==10000)my_printf("00001");
}