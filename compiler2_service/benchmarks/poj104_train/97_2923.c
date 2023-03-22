#define NUM_ITER 1191216

#include <header.h>

main_bench()
{
	int a[5],b,c;
	a[0]=100;a[1]=50;a[2]=20;a[3]=10;a[4]=5;
	my_scanf ("%d",&b);
	for (int i=0;i<=4;i++)
	{
		c=b/a[i];
		b=b-c*a[i];
		my_printf ("%d\n\n",c);
		}
		my_printf ("%d",b);
}