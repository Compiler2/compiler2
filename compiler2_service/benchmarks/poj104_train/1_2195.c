#define NUM_ITER 2298

#include <header.h>


int t=0;
int mini(int k,int i)
{
	if(k==1)t=t+1;
	for(;i<=k;i++)
	{
		if(k%i==0)mini(k/i,i);
	}
	return 0;
}
	
int main_bench()
{
	int N,n;
	my_scanf("%d",&N);
	for(n=0;n<=N-1;n++)
	{
		int M;
		my_scanf("%d",&M);
		mini(M,2);
		my_printf("%d\n",t);
		t=0;
	}
}