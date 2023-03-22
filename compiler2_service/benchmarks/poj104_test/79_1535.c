#define NUM_ITER 23864

#include <header.h>

int main_bench()
{
	int i,k,f[301],n,m;
	my_scanf("%d%d",&n,&m);
	while (n*m!=0)
	{
		f[1]=0;
		for (i=2;i<=n;i++)
		{
			k=m%i;
			f[i]=(f[i-1]+k)%i;
		}
		my_printf("%d\n",f[n]+1);
		my_scanf("%d%d",&n,&m);
	}
}