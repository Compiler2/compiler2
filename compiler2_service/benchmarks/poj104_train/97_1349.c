#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);

	int l;
	int r;
	l=n%100;
	r=(n-l)/100;
	my_printf("%d\n",r);
	n=l;
	l=n%50;
	r=(n-l)/50;
	my_printf("%d\n",r);
	n=l;
	l=n%20;
	r=(n-l)/20;
	my_printf("%d\n",r);
	n=l;
	l=n%10;
	r=(n-l)/10;
	my_printf("%d\n",r);
	n=l;
	l=n%5;
	r=(n-l)/5;
	my_printf("%d\n",r);
	n=l;
	l=n%1;
	r=(n-l)/1;
	my_printf("%d",r);





	
	return 0;
}