#include <header.h>

int main_bench()
{
    int a,b,c,d,e,f,g,h,i,j;
    my_scanf("%d",&a);
    if(a<=9) my_printf("%d\n",a);  
    else
    {if(a<=99) 
    {b=a/10;c=a-10*b;
    my_printf("%d%d",c,b);}
    else
    {if(a<=999)
    {d=a/100;e=(a-d*100)/10;f=a-100*d-10*e;
    my_printf("%d%d%d",f,e,d);}
    else
    if(a<=9999)
    {g=a/1000;h=(a-1000*g)/100;i=(a-1000*g-100*h)/10;j=a-1000*g-100*h-10*i;
    my_printf("%d%d%d%d",j,i,h,g);}
    else
    if(a=10000)
    my_printf("00001\n");}}	
  return 0;
}
