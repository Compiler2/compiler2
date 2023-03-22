#define NUM_ITER 25793

#include <header.h>

int SS(int i);
int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	for(i=3;i<=n/2;i++)
	{
		if(SS(i)&&SS(n-i))
			my_printf("%d %d\n",i,n-i);
	}
}

int SS(int i)
{
	int k;
	for(k=2;k<=i-1;k++)
		if(i%k==0)break;
		if(k<i)return 0;
		else
			return 1;
}