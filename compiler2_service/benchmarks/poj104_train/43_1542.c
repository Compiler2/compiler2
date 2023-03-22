#define NUM_ITER 9690

#include <header.h>

main_bench()
{
	int x,i,j,k,l;
	my_scanf("%d",&x);
	for (i=3;i<=x/2;i+=2)
	{
		l=0;
		j=x-i;
		for(k=2;k<=i-1;k++)
		{
			l=l+!(i%k);
		}
		for (k=2;k<j;k++)
		{
			l+=!(j%k);
		}
		if (!l) my_printf("%d %d\n",i,j);
	}




}