#define NUM_ITER 63056

#include <header.h>

 int main_bench()
{
	int a,b,c,d,e;
	a=1;
	b=0;
    c=0;
	my_scanf("%d",&e);
	while(a<=e)
	{a++;
	my_scanf("%d",&d);
    if(d>c)
	{   b=c;
     	c=d;
	}
    else if(d>b&&d<=c)
	    b=d;
	else b=b;
	     c=c;
	}
	my_printf("%d\n%d",c,b);
	return 0;
 }
