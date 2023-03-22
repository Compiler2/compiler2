#include <header.h>

int main_bench()
{
long n,f;
int a,b,c,d,e;
my_scanf("%d",&n);
a=n/10000;
 b=(n%10000)/1000;
 c=(n%1000)/100;
 d=(n%100)/10;
e=n%10;
if(n>=10000)
{
  f=10000*e+1000*d+100*c+10*b+a;
  my_printf("%ld",f);
}
else if(n>=1000)
{
  f=1000*e+100*d+10*c+b;
  my_printf("%ld",f);
}
else if(n>=100)
{
  f=100*e+10*d+c;
  my_printf("%ld",f);
}
else if(n>=10)
{
  f=10*e+d;
  my_printf("%ld",f);
}
else my_printf("%d",n);
return 0;
}


