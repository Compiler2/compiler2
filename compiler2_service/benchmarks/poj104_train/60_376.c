#define NUM_ITER 15522

#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	if(n==1)
		my_printf("empty");
	else
		if(n==2||n==3||n==4)
		my_printf("empty");
		else
		{
	for(i=3;i<=n-2;i++)
	{
		for(int j=2;j<i;j++)
		{
			int c;
			c=i%j;
			if(c==0)
				goto part1;
		}
		for(int j=2;j<i+2;j++)
		{
			int c;
			c=(i+2)%j;
			if(c==0)
				goto part1;
		}
		my_printf("%d %d\n",i,i+2);
part1:;
	}
		}
	return 0;
}
