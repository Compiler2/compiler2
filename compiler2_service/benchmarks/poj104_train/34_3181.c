#define NUM_ITER 338054

#include <header.h>

main_bench()
{
	int a,b,c,d;
	my_scanf("%d",&a);
	b=2;
	if(a>1){
	do {c=a%b;
		if(c==1)
	    {
		d=a*3+1;
		my_printf("%d*3+1=%d\n",a,d);
		a=d;
		}
		else
		{d=a/2;
		   if(d>=1)
		    {my_printf("%d/2=%d\n",a,d);
		    a=d;}
		   else
		    a=d;
	    }
		
} while(a>1);
  my_printf("End");
}
  else
  my_printf("End");
}