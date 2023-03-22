#include <header.h>

main_bench()
{
      int d,i,w;
      my_scanf("%d",&w);
      d=(w+5)%7;
      for(i=1;i<=12;i++)
      {
                        if(d%7==5) my_printf("%d\n",i);
                        if(i==2)
                        d=d+7;
                        else if(i==4||i==6||i==9||i==11)
                        d=d+2;
                        else d=d+3;
                        
                        }
                                                }
                        
