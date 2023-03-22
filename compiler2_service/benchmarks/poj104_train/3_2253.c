#define NUM_ITER 56577

#include <header.h>

int check(int q,int t,int b[])
{
	int i,j;
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			if(i==j)
				continue;
			if(b[i]+b[j]==q)
				return 1;
		}
	}
	return 0;
}
int main_bench()
{
	int n,k,a[1000],i;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	if(check(k,n,a))
		my_printf("yes\n");
	else
		my_printf("no\n");
	return 0;
}
