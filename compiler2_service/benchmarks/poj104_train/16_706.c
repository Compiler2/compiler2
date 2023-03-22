#include <header.h>

int main_bench()
 {
  int a,b,c,d,e;
  my_scanf("%d",&a);
  if (a%10==a )  my_printf("%d",a);
  if (a%10!=a && a%100==a) 
      {b=a%10;
       c=((a-b)/10)%10;
       my_printf("%d%d",b,c);}
   if (a%10!=a && a%100!=a  && a%1000==a) 
      {b=a%10;
       c=((a-b)/10)%10;
       d=((a-b-10*c)/100)%10;
       my_printf("%d%d%d",b,c,d);}
    if (a%10!=a && a%100!=a  && a%1000!=a && a%10000==a) 
      {b=a%10;
       c=((a-b)/10)%10;
       d=((a-b-10*c)/100)%10;
       e=((a-b-10*c-100*d)/1000)%10;
       my_printf("%d%d%d%d",b,c,d,e);}
   if (a==10000)  my_printf("%d",00001);
  return 0;
  }