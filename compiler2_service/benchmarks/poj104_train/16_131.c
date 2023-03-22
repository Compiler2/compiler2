#define NUM_ITER 1726294

#include <header.h>

int main_bench()
{
	int a,b,c,d,e;
    my_scanf("%d",&a);
	b=a/1000;
	c=(a-b*1000)/100;
	d=(a-b*1000-c*100)/10;
	e=a-b*1000-c*100-d*10;	
	if(1000<=a&&a<=10000)
      my_printf("%d%d%d%d",e,d,c,b);
	else
		if(100<=a&&a<1000)
			my_printf("%d%d%d",e,d,c);
		else
			if(10<=a&&a<100)
				my_printf("%d%d",e,d);
			else 
				my_printf("%d",e);

	return 0;
}