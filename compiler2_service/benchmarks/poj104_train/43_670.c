#define NUM_ITER 5002

#include <header.h>

int main_bench()
{int q[100000],w[100000];
int i,j,k,l,m,n,a,b,c;
my_scanf("%d",&n);
k=0;
for(i=3;i<=n;i++)
{
	for(j=2;j<=i-1;j++)
	{
		if(i%j==0)
		{break;}

		if(j==i-1)
		{
			k=k+1;q[k]=w[k]=i;
		}
	}
}
	

	for(l=1;l<=n;l++)
	{
		for(m=l;m<=n;m++)
			if(n==q[l]+w[m])
				my_printf("%d %d\n",q[l],w[m]);
	}
} 