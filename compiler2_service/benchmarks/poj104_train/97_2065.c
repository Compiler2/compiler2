#define NUM_ITER 822505

#include <header.h>


int main_bench()
{
 int m,a,b,c,d,e,f;
 my_scanf("%d",&m);
a=m/100;
b=(m%100)/50;
c=((m%100)%50)/20;
d=(((m%100)%50)%20)/10;
e=((((m%100)%50)%20)%10)/5;
f=((((m%100)%50)%20)%10)%5;
 
 
 my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
 
 return 0;
 
}
