#include <header.h>

int main_bench()
{int n,a;
my_scanf("%d",&n);
my_printf("%d\n\n",n/100);
 my_printf("%d\n\n",(n%100)/50); 
 my_printf("%d\n\n",(n%50)/20);
a=n%50;
 my_printf("%d\n\n",(a%20)/10);
 my_printf("%d\n\n",(n%10)/5);
 my_printf("%d\n\n",n%5);
return 0;
}