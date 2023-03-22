#include <header.h>

int main_bench()
{
 int a,b,c,d,e,f;
 my_scanf("%d",&a);
 if (a/10==0)
  my_printf("%d",a);
 else
  if (a/100==0)
  {
   b=a%10;
   c=a/10;
   d=10*b+c;
    if (b==0)
     my_printf("0%d",d);
    else
     my_printf("%d",d);
  }
  else
   if (a/1000==0)
   {
    b=a%10;
    c=a/100;
    d=a/10-10*c;
    e=100*b+10*d+c;
     if (b==0)
      if (d==0)
       my_printf("00%d",e);
      else
       my_printf("0%d",e);
     else
     my_printf("%d",e);
   }
   else
    if (a/10000==0)
    {
     b=a%10;
     c=a/1000;
     d=a/100-10*c;
     e=a/10-10*d-100*c;
     f=1000*b+100*e+10*d+c;
     if (b==0)
      if (e==0)
       if (d==0)
        my_printf("000%d",f);
       else
        my_printf("00%d",f);
      else
       my_printf("0%d",f);
     else
      my_printf("%d",f);
    }
    else
     my_printf("00001");
 return 0;
}
