#include <header.h>

int main_bench()
{
	int n,i,a,c,d;
	my_scanf("%d\n",&n);
	i=1;
	my_scanf("%d\n",&a);
	c=a;
	while(i<n)
	{	my_scanf("%d\n",&a);
	if(c<a)
	{
		d=c;
	c=a;
	}
	else
		if(d<a)
		d=a;
	i++;
	}
	my_printf("%d\n",c);
	my_printf("%d\n",d);

}
	

 