#include <header.h>

int main_bench()
{
 int m,a;
 my_scanf("%d",&m);
 a=m/100;my_printf("%d\n",a);m=m-a*100;
 a=m/50;my_printf("%d\n",a);m=m-a*50;
 a=m/20;my_printf("%d\n",a);m=m-a*20;
 a=m/10;my_printf("%d\n",a);m=m-a*10;
 a=m/5;my_printf("%d\n",a);m=m-a*5;
 a=m/1;my_printf("%d\n",a);m=m-a*1;


   return 0;
}

