#define NUM_ITER 17362

#include <header.h>

int main_bench()
{
	int n,i,j,m=0,p,q;
	int sz[10000];
	my_scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0){
				break;
			}
		}
		if(j==i){
			sz[m]=i;
			m++;
		}
	}
	for(p=0;p<m;p++)
	{
		for(q=p+1;q<m;q++)
		{
			if(sz[q]-sz[p]==2)
		my_printf("%d %d\n",sz[p],sz[q]);
		}
	}
	if(n<=4)
		my_printf("empty");
		
	return 0;
}
