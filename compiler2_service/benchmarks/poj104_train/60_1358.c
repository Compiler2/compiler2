#define NUM_ITER 9752

#include <header.h>

int prime(int x)
{ 
	int j;
	for(j=2;j<x;j++)
    { if(x%j==0)  return 0;  }
	              return 1;
}
int prime(int x);
main_bench()
{
	int n,a,b,x;
	my_scanf("%d",&n);
	if(n<5)
    my_printf("empty");
    else
    for(x=2;x<=n-2;x++)
    {
		a=prime(x);
		b=prime(x+2);
		if(a&&b)
			my_printf("%d %d\n",x,(x+2));
	}
}