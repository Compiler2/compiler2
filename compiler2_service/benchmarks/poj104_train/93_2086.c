#define NUM_ITER 1209065

#include <header.h>

int main_bench()
{
    int i;
	my_scanf("%d",&i);
	if(i%3==0)

	 {
 my_printf("3");
     if(i%5==0)
		 my_printf(" 5");
	      if(i%7==0)
		    my_printf(" 7");
	 }
	 if(i%3>0)
     {if(i%5==0)
	 {my_printf("5");
	      if(i%7==0)
			  my_printf(" 7");}
	 if(i%5>0)
	 {if(i%7==0)
			  my_printf("7");}
	 }
	 if(i%3!=0 && i%5!=0 && i%7!=0)
		 my_printf("n"); 
return 0;
}