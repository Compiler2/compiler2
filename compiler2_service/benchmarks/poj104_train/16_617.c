#include <header.h>

int main_bench()
{
 int a,b,c,d,e,n;
 my_scanf("%d",&n);
 a=n/10000;
 b=(n-10000*a)/1000;
 c=(n-10000*a-1000*b)/100;
 d=(n%100)/10;
 e=n%10;
 if(a!=0) my_printf("%d%d%d%d%d",e,d,c,b,a);
       else if(b!=0) my_printf("%d%d%d%d",e,d,c,b);
             else if(c!=0) my_printf("%d%d%d",e,d,c);
                  else if(d!=0) my_printf("%d%d",e,d);
                       else if(e!=0) my_printf("%d",e);
                             else my_printf("0");
  return 0;
}