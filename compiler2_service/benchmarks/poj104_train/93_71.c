#include <header.h>

main_bench()
{
	int a,b,c,d;
	    a=3;
		b=5;
		c=7;
	my_scanf("%d",&d);
	if(d%a==0)
	 if(d%b==0)
	  if(d%c==0)
	  my_printf("%d %d %d",a,b,c);
	  else my_printf("%d %d",a,b);
	else
		if(d%c==0)
			my_printf("%d %d",a,c);
         else
			 my_printf("%d",a);
	else
		if(d%b==0)
			if(d%c==0)
				my_printf("%d %d",b,c);
			else my_printf("%d",b);
		else 
			if(d%c==0)
				my_printf("%d",c);
            else my_printf("n");
}