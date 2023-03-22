#include <header.h>

int main_bench()
{
 char a,b,c,d,e,x,y;
 my_scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
 if(c=='\n')
  {x=a;
   a=b;
   b=x;
   my_printf("%c%c",a,b);}
 else if(d=='\n')
   {x=a;
    a=c;
    c=x;
    my_printf("%c%c%c",a,b,c); }
else if(e=='\n')
   {x=a;
    a=d;
    d=a;
    y=b;
    b=c;
    c=y;
    my_printf("%c%c%c%c",a,b,c,d);}
else {x=a;
      a=e;
      e=x;
      y=b;
      b=d;
      d=y;
     my_printf("%c%c%c%c%c",a,b,c,d,e);}
}

