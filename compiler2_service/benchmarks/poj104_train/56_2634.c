#include <header.h>

int main_bench() 
{ 
int num,a,b,c,d,e; 
my_scanf("%d",&num); 
a=num/10000; 
b=(num-a*10000)/1000; 
c=(num-10000*a-1000*b)/100; 
d=(num-10000*a-1000*b-100*c)/10; 
e=num-10000*a-1000*b-100*c-10*d; 
my_printf("%d",e); 
if(d) 
my_printf("%d",d); 
if(c) 
my_printf("%d",c); 
if(b) 
my_printf("%d",b); 
if(a) 
my_printf("%d",a); 
} 