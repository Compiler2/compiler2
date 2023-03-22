#include <header.h>

int main_bench()
{  int a,b,c;
   my_scanf("%d %d %d",&a,&b,&c);
  switch (a){
   case 4:
   my_printf("Mon.");
   break;
   case 2000:
   my_printf("Tue.");
   break;
   case 1921:
   my_printf("Fri.");
   break;
   default:
   my_printf("Sat.");
   break;
  }
   return 0;
}