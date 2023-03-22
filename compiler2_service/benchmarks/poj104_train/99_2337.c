#include <header.h>

int main_bench()
{
	int n,i,n1 = 0,n2 = 0,n3 = 0,n4 = 0;
	int y;
	double a,b,c,d,x;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d",&y);
		if (y>=0 && y<=18)
			n1 += 1;
		else if (y>=19 && y<=35)
			n2 += 1;
		else if (y>=36 && y<=60)
			n3 += 1;
		else 
			n4 += 1;
	}
	x = n;
	a = n1/x;
	b = n2/x;
	c = n3/x;
	d = n4/x;
	my_printf("1-18: %.2lf%%\n",100*a);
	my_printf("19-35: %.2lf%%\n",100*b);
	my_printf("36-60: %.2lf%%\n",100*c);
	my_printf("60??: %.2lf%%\n",100*d);
	return 0;
}