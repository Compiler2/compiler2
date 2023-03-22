#include <header.h>

main_bench()
{
int a,b,k,n;
my_scanf("%d",&n);
for(;n>1;)
{
	if (n%2==1) 
	{
		k=n*3+1;
		my_printf("%d*3+1=%d\n",n,k);
	}
	else 
	{
	    k=n/2;
		my_printf("%d/2=%d\n",n,k);
	}
	n=k;
}
my_printf("End");
return 0;
}