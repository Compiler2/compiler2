#define NUM_ITER 485770

#include <header.h>

int main_bench()
{
	long a,b,c,d,e,x;
         int i=1;
	loop:if(i<=4)
         {
         my_scanf("%ld",&x);
	a=x/10000;
	b=(x-a*10000)/1000;
	c=(x-a*10000-b*1000)/100;
	d=(x-a*10000-b*1000-c*100)/10;
	e=x-a*10000-b*1000-c*100-d*10;
	if(a==0&&b==0&&c==0&&d==0)
		my_printf("%d\n",e);
	else if(a==0&&b==0&&c==0)
		my_printf("%d%d\n",e,d);
	else if(a==0&&b==0)
	    my_printf("%d%d%d\n",e,d,c);
	else if(a==0)
		my_printf("%d%d%d%d\n",e,d,c,b);
	else
               my_printf("%d%d%d%d%d\n",e,d,c,b,a);
         i++;
         goto loop;
         }
	return 0;
}