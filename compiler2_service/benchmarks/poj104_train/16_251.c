#include <header.h>

int main_bench()
{
    int n,a,b,c,d;
    my_scanf("%d",&n);
    if(n/10000==1)
    my_printf("00001");
    else if(n/1000!=0)
    { a=n;
      b=a%10;
      a=a/10;
      c=a%10;
      a=a/10;
      d=a%10;
      a=a/10;
      my_printf("%d%d%d%d",b,c,d,a);
    }
    else if(n/100!=0)
    {
     a=n;
      b=a%10;
      a=a/10;
      c=a%10;
      a=a/10;
      my_printf("%d%d%d",b,c,a);
      }
      else if(n/10!=0)
       {
       a=n;
       b=a%10;
       a=a/10;
       my_printf("%d%d",b,a);
       }
       else my_printf("%d",n);
       return 0;
}
