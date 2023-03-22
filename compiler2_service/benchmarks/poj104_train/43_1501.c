#define NUM_ITER 23275

#include <header.h>

main_bench()
{
	int m,i,k,t;
	my_scanf("%d",&m);
	for(i=3;i<=(m/2);i=i+2)
	{
	for(t=2;t<=(i/2);t++)
	if(i%t==0)
	break;
	if(t>(i/2))
	{
	for(t=2;t<=((m-i)/2);t++)
	if((m-i)%t==0)
		break;
	if(t>(m-i)/2)
		my_printf("%d %d\n",i,m-i);
	}
	}
}