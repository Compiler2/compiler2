#define NUM_ITER 13049

#include <header.h>

int prime(int a)
{
	int i;
	for(i=2;i<=a/2;i++)
	    if(a%i==0) return 1;
	return 0;
}

main_bench()
{
	int n,i,a=0;
	my_scanf("%d",&n);
	for(i=2;i<=n-2;i++)
	{
		if(prime(i)==0&&prime(i+2)==0)
		{my_printf("%d %d\n",i,i+2);a++;}
	}
	if(a==0) my_printf("empty");
}