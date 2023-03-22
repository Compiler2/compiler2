#define NUM_ITER 10983

#include <header.h>

int main_bench()
{
	int n,k,i,j;
	int sz[1000];
	int tag=0;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		my_scanf("%d",&sz[i]);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
			if(sz[i]+sz[j]==k)
				tag=1;
	}
	if(tag)
		my_printf("yes");
	else 
		my_printf("no");
	return 0;
}