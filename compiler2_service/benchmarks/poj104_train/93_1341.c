#define NUM_ITER 1991208

#include <header.h>

int main_bench()
{
int a;
int i=0;
my_scanf("%d",&a);
if(a%3==0) 
 i=i+3;
if(a%5==0)  
i=i+5;
if(a%7==0) 
 i=i+7;
switch(i)  {
case 0:
my_printf("n");break;
case 3:
my_printf("3");break;
case 5:
my_printf("5");break;
case 7:
my_printf("7");break;
case 8:
my_printf("3 5");break;
case 10:
my_printf("3 7");break;
case 12:
my_printf("5 7");break;
case 15:
my_printf("3 5 7");break;
}
return 0;
}

