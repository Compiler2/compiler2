#include <header.h>

main_bench()
{
   int n;
   my_scanf("%d",&n);
   if(n%3==0)
	   if(n%5==0)
		   if(n%7==0)
			   my_printf("3 5 7");
		   else
			   my_printf("3 5");
   if(n%3==0)
	   if(n%7==0)
            if(n%5!=0)
				my_printf("3 7");
   if(n%5==0)
	   if(n%7==0)
            if(n%3!=0)
				my_printf("5 7");
	if(n%5!=0)
	   if(n%7!=0)
           if(n%3!=0)
				my_printf("n");
	if(n%5==0)
	   if(n%7!=0)
            if(n%3!=0)
				my_printf("5");
	if(n%5!=0)
	   if(n%7==0)
            if(n%3!=0)
				my_printf("7");
	if(n%5!=0)
	   if(n%7!=0)
            if(n%3==0)
				my_printf("3");


}