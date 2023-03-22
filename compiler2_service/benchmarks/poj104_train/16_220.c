#define NUM_ITER 1458914

#include <header.h>

int main_bench()
{
  int n,a,b,c,d;	
	my_scanf("%d",&n);
	a=n/1000;
	b=(n/100)%10;
	c=(n%100)/10;
	d=n%10;

    
	
	if(n/1000!=0) my_printf("%d%d%d%d",d,c,b,a);
	else if(n/100!=0) my_printf("%d%d%d",d,c,b);
	else if(n/10!=0) my_printf("%d%d",d,c);
	else my_printf("%d",d);
	
	
return 0;

}