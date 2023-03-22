#define NUM_ITER 1620338

#include <header.h>

int main_bench()
{
int a,b,c,d,e,x;
my_scanf("%d",&x);
e=x/10000;
d=(x-e*10000)/1000;
c=(x-e*10000-d*1000)/100;
b=(x-e*10000-d*1000-c*100)/10;
a=x-e*10000-d*1000-c*100-b*10;
if(x<10)
my_printf("%d",a);
else if(x<100)
my_printf("%02d",10*a+b);
else if(x<1000)
my_printf("%03d",100*a+10*b+c);
 else if(x<10000)
 my_printf("%04d",1000*a+100*b+10*c+d);
else if(x==10000)
my_printf("00001");
return 0;
}