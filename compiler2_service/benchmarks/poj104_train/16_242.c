#include <header.h>

int main_bench()
{
   int n;
   int tmp;
   my_scanf("%d",&n);
   while(1){
	   tmp=n%10;
	   my_printf("%d",tmp);
	   if(!(n=n/10))break;
   }
   my_printf("\n");
   return 0;
}