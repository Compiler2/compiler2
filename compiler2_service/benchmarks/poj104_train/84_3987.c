#define NUM_ITER 64508

#include <header.h>

main_bench()
{
	int a,b,c,i,j,n,a1,a2;
	my_scanf("%d%d%d",&n,&a1,&a2);
	b=(a1>a2)?a1:a2;
	c=(a1<a2)?a1:a2;
	for(i=1;i<n-1;i++)
	{
		my_scanf("%d",&a);
		if(a>b)
		{
			c=b;b=a;
		}
		else if(a>c)c=a;
	}
	my_printf("%d\n%d\n",b,c);
}