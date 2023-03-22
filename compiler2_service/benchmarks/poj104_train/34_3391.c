#define NUM_ITER 380654

#include <header.h>

main_bench()
{
	int m,n,r;
	my_scanf("%d",&m);
	if(m!=1)
	{
	do
	{
		r=m%2;
		n=m;
		if(r!=0)
		{
			m=m*3+1;
			my_printf("%d*3+1=%d\n",n,m);
		}
		if(r==0)
		{
			m=m/2;
			my_printf("%d/2=%d\n",n,m);
		}
	}while(m!=1);
	}
	my_printf("End");
}