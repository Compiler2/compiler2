#define NUM_ITER 1037843

#include <header.h>

main_bench()
{
	int a,n=0,b,i,c;
	my_scanf("%d",&a);
	b=a;
	while(a>=1)
	{
		a=a/10;
		n=n+1;
	}
	for(i=0;i<n;i++)
	{
		c=b%10;
		my_printf("%d",c);
		b=(b-b%10)/10;
	}
}