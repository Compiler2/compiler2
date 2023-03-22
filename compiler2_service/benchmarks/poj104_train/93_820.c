#define NUM_ITER 1603080

#include <header.h>

int main_bench()
{
   int x;
   my_scanf("%d",&x);
       if(x%105==0)
       {
         my_printf("3 5 7",x);
	   }
       else if(x%15==0)
	   {
	     my_printf("3 5",x);
	   }
	   else if(x%21==0)
	   {
	     my_printf("3 7",x);
	   }
	   else if(x%35==0)
	   {
	     my_printf("5 7",x);
	   }
	   else if(x%3==0)
	   {
	     my_printf("3",x);
	   }
	   else if(x%5==0)
	   {
	     my_printf("5",x);
	   }
	   else if(x%7==0)
	   {
	     my_printf("7",x);
	   }
	   else
	   {
         my_printf("n",x);
	   }
	   return 0;
}