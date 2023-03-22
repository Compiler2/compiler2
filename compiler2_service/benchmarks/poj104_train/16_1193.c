#include <header.h>

int main_bench()
    {
    int a,b,c,d,e;
my_scanf("%d",&a);

if(a>9)
{
       if(a>99)
       {
               if(a>999)
                        {
                            b=a%10;
                        c=((a-b)%100)/10;
                        d=((a-b-c)%1000)/100;
                        e=((a-b-c-d)%10000)/1000;
                        my_printf("%d%d%d%d",b,c,d,e);
                        }
                        else
                        {
                            b=a%10;
                        c=((a-b)%100)/10;
                        d=((a-b-c)%1000)/100;
                        my_printf("%d%d%d",b,c,d);
                        }
                        }
                        else
                        {
                            b=a%10;
                        c=((a-b)%100)/10;
my_printf("%d%d",b,c);
                        }
                        }
                        else
                        {
                            b=a%10;
                            my_printf("%d",b);
                            }
                        return 0;
                        }
                       
