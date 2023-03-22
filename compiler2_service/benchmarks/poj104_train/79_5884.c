#define NUM_ITER 1676324

#include <header.h>

int check(int N,int p)
{
	int k[400];
	int i,j,count=0;
	for(i=0;i<N;i++)
		k[i]=1;
	i=-1;
	for(j=1;j<N;j++)
	{
		count=0;
		do
		{
			i=(i+1)%N;
			count=count+k[i];
		}while(count<p);
		count=0;
		k[i]=0;
	}
	j=0;
	while(k[j]!=1)j++;
	return(j+1);
}

int main_bench()
{
	int n,m,res,i;
	while(my_scanf("%d %d", &n, &m) && n != 0 && m != 0)
	{
		res=check(n,m);
		my_printf("%d\n",res);
	}
}