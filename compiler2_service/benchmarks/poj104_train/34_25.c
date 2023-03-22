#include <header.h>

int main_bench()
{
   int i;
   char str[5]={'E','n','d'};
   my_scanf("%d",&i);
   while(i!=1)
   {
	   if(i%2==0)
	   {
		   my_printf("%d/2=%d\n",i,i/2);
		   i=i/2;
	   }
	   else
	   {
		   my_printf("%d*3+1=%d\n",i,i*3+1);
		   i=i*3+1;
	   }
   }
   my_printf("%s",str);
}
