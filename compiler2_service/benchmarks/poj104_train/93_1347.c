#define NUM_ITER 1967189

#include <header.h>

int main_bench()
{
	int a,m;
	m=0;
	
	my_scanf("%d",&a);
	
	
   if(a%3==0)
   
   m=m+1;
   if(a%5==0)
  
   m=m+10;
   if(a%7==0)
   
   m=m+100;
   if(m==0)
	my_printf("n");
   if(m==1)
   my_printf("3");
   if(m==10)
	   my_printf("5");
   if(m==100)
   my_printf("7");
   if(m==11)
   my_printf("3 5");
   if(m==101)
   my_printf("3 7");
   if(m==110)
   my_printf("5 7");
   if(m==111)
	   my_printf("3 5 7");

   return 0;
}
