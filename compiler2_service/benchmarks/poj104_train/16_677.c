#include <header.h>

int main_bench()
{
 int a,b,i;
 my_scanf("%d",&a);
 b=a%10;
 my_printf("%d",b);
 a=a/10;
 if (a!=0)
  {
    b=a%10;
    my_printf("%d",b);
    a=a/10;
     if (a!=0)
      {
        b=a%10;
        my_printf("%d",b);
        a=a/10;
         if (a!=0)
          {
            b=a%10;
            my_printf("%d",b);
            a=a/10;
             if (a!=0)
             {
              b=a%10;
              my_printf("%d",b);
              a=a/10;
              }
           }
      }
    }
 return 0;
}