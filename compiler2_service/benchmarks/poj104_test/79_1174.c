#define NUM_ITER 2547021

#include <header.h>

int main_bench()
{
	int m,n;
	int king(int m,int n);
	while(n!=0&&m!=0)
	{
		my_scanf("%d %d",&n,&m);
		if(n!=0&&m!=0)
		my_printf("%d\n",king(m,n)+1);
	}
}

int king(int m,int n)
{
	int i;
	int k=0;
	for(i=2;i<=n;i++)
	k=((m%i)+k)%i;
	return k;
}

