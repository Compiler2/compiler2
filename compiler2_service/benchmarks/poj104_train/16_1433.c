#include <header.h>

int main_bench()
{int n,a,b,c,d,e,f,g,h,i;
my_scanf("%d",&n);
if(n<10)
my_printf("%d",n);
else if(n<100)
{a=n%10;b=n/10;
my_printf("%d%d",a,b);}
else if(n<1000)
{c=n%10,e=n/100;d=(n/10)%10;
my_printf("%d%d%d",c,d,e);}
else if(n<10000)
{f=n%10;g=(n%100)/10;h=(n/100)%10;i=n/1000;
my_printf("%d%d%d%d",f,g,h,i);}
return 0;
}