#include <header.h>

int main_bench()
{
   int   a,b,c,d,x,y; 
   my_scanf("%d",&x) ;
   a=x/1000;
   b=(x-a*1000)/100;
   c=(x-a*1000-b*100)/10;
   d=x-a*1000-b*100-c*10;
   if(a==0)
	   if(b==0)
		   if(c==0)
			   y=d;
		   else y=d*10+c;
		else y=d*100+c*10+b;
	else y=d*1000+c*100+b*10+a;
	if(d==0)
		if(c==0)
			if(b==0)
				if(a==0)
					my_printf("0");
				else my_printf("000%d",y);
			else my_printf("00%d",y);
		else my_printf("0%d",y);
	else my_printf( "%d",y); 
} 
