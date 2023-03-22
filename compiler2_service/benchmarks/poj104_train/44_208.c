#include <header.h>

int reverse(int num)
{
    int c=0,a;
    if(num>=0)
    {
              for(;num!=0;)
              {
                    a=num%10;
                    c=c*10+a;
                    num=num/10; 
              }
              return c;
    }
    else
    {
        num=0-num;
        for(;num!=0;)
              {
                    a=num%10;
                    c=c*10+a;
                    num=num/10; 
              }
        c=0-c;
        return c;
    }
}
main_bench()
{
      int n;
      for(int i=1;i<=6;i++)
      {
                       my_scanf("%d",&n);
                       n=reverse(n);
                       my_printf("%d\n",n);
      }

}
