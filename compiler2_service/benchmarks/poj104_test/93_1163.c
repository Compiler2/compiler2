#include <header.h>

int main_bench()
{int a,b,c,d;
my_scanf("%d",&d);
a=d%3;
b=d%5;
c=d%7;
if (!a)
{ if (!b) 
{    if (!c)
         my_printf("3 5 7");
      else
		  my_printf("3 5");}
   else
   { if (!c)
      my_printf ("3 7");
   else 
	   my_printf("3");}} 
else
{  if (!b) 
   {  if (!c)
        my_printf("5 7");
       else 
		   my_printf("5");}
   else
   {  if (!c) 
        my_printf("7");
       else
		   my_printf("n");}}
return 0;
}