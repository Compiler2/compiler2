#define NUM_ITER 1798734

#include <header.h>

int main_bench()
{
     int a,b,c,d,e;
     my_scanf("%d",&a);
     if
     ((a>=1000)&&(a<9999))
    { b=a/1000;
     c=(a%1000)/100;
     d=(a%100)/10; 
     e=a%10;
     my_printf("%d%d%d%d",e,d,c,b);
     }
     if
                                 ((a>=100)&&(a<999))
     {b=a/100;
     c=(a%100)/10;
     d=a%10;
     my_printf("%d%d%d",d,c,b);
     }
     if
    
                             ((a>=10)&&(a<99))
     { b=a/10;
     c=a%10;
     my_printf("%d%d",c,b);
     }
     if
     ((a>=1)&&(a<9))
     my_printf("%d",a);
     if(a==0)
     my_printf("0");
     if(a==10000)
     my_printf("00001");
     }