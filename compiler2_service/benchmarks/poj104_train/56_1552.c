#define NUM_ITER 1091681

#include <header.h>

int main_bench()
{
long x;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
   my_scanf("%ld",&x);
   if(x/10000) {
	   a=x/10000;
       b=(x-10000*a)/1000;
	   c=(x-10000*a-1000*b)/100;
	   d=(x-10000*a-1000*b-100*c)/10;
	   e=x-10000*a-1000*b-100*c-d*10;
	   my_printf("%d%d%d%d%d",e,d,c,b,a);

   
   }
   else if(x/1000) {
	   a=x/1000;
	    b=(x-1000*a)/100;
		c=(x-1000*a-100*b)/10;
		d=x-100*a-100*b-10*c;
		my_printf("%d%d%d%d",d,c,b,a);
	}
   else if(x/100) {a=x/100;
	
	  b=(x-100*a)/10;
	  c=x-100*a-10*b;
	  my_printf("%d%d%d",c,b,a);
	}
   else if(x/10){ a=x/10;
	
       b=x-10*a;
	   my_printf("%d%d",b,a);

	}
   else{ a=x;my_printf("%d",a);}
}