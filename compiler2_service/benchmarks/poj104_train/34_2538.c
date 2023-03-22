#include <header.h>

main_bench()
{
     int a,b,c,d,e,f,g;
     my_scanf("%d",&a);
     if (a!=1)
     {
     while (a!=1)
     {
           if (a%2==0)
           {
                      b=a/2;
                      my_printf("%d/2=%d\n",a,b);
                      a=b;
           }
           else
           {
               b=a*3+1;
               my_printf("%d*3+1=%d\n",a,b);
               a=b; 
           }
     }
     }
     my_printf("End");
} 
                    

