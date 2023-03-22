#include <header.h>

int main_bench()
{
int a;

my_scanf("%d",&a);

if(!(a%3)&&!(a%5)&&!(a%7)) my_printf("3 5 7\n");

else if (!(a%3)&&!(a%5)) my_printf("3 5\n");

else if(!(a%3)&&!(a%7)) my_printf("3 7\n");

else if(!(a%5)&&!(a%7)) my_printf("5 7\n");

else if(!(a%3)&&!(a%7)) my_printf("3 7\n");

else if(!(a%3)) my_printf("3\n");

else if(!(a%5)) my_printf("5\n");

else if(!(a%7)) my_printf("7\n");

else my_printf("n\n");
}

