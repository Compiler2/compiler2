#define NUM_ITER 1722465

#include <header.h>

int main_bench()
{int a,b,c,d,e,f;
my_scanf("%d",&a);
b=a/10000;
c=a/1000-b*10;
d=a/100-b*100-c*10;
e=a/10-b*1000-c*100-d*10;
f=a-b*10000-c*1000-d*100-e*10;
if(b!=0)
{my_printf("%d",f*10000+e*1000+d*100+c*10+b);}
else if (c!=0)
{my_printf("%d",f*1000+e*100+d*10+c);}
else if (d!=0)
{my_printf("%d",f*100+e*10+d);}
else if (e!=0)
{my_printf("%d",f*10+e);}
else if (f!=0)
{my_printf("%d",f);}
else {my_printf("0");}
}