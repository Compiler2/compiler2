#include <header.h>

main_bench()
{
      int a;
      int b,c,d,e;
      my_scanf("%d",&a);
      if(a==10000)
      my_printf("00001");
      b=a/1000;
      c=(a-b*1000)/100;
      d=(a-b*1000-c*100)/10;
      e=a-b*1000-c*100-d*10;
      if(b!=0)
      my_printf("%d%d%d%d",e,d,c,b);
      else
      {if(c!=0)
      my_printf("%d%d%d",e,d,c);
      else
      {if(d!=0)
      my_printf("%d%d",e,d);
      else
      my_printf("%d",e);}}
}