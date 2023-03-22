#include <header.h>

int main_bench()
{int a;
 my_scanf("%d",&a);
 if(a%105==0) my_printf("3 5 7\n");
 else if(a%15==0&&a%7!=0) my_printf("3 5\n");
 else if(a%21==0&&a%5!=0) my_printf("3 7\n");
 else if(a%35==0&&a%3!=0) my_printf("5 7\n");
 else if(a%35!=0&&a%3==0) my_printf("3\n");
 else if(a%21!=0&&a%5==0) my_printf("5\n");
 else if(a%15!=0&&a%7==0) my_printf("7\n");
 else  my_printf("n\n");
 }
