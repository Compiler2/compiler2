#define NUM_ITER 2668

#include <header.h>

int factor(int N,int min);
int main_bench()
{
	int m,n,i,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&m);
		k=factor(m,2);
		my_printf("%d\n",k);	
	}
		
	return 0;
}
int factor(int N,int min)
{
	int result=1,i;
	if(N<min)
	return 0;
	for(i=min;i<N;i++)
	{
		if(N%i==0)
		result+=factor(N/i,i);	
	}	
	return result;
}
