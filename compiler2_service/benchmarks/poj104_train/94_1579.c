#define NUM_ITER 21744

#include <header.h>

int main_bench()
{
	int sz[501];
	int js[501];
	int n,i,k,a,b;
	k=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&(sz[i]));
	}
	for(i=0;i<n;i++)
	{
		if(sz[i]%2!=0)
		{
			k=k+1;
			js[k-1]=sz[i];
		}
	}
	for(i=1;i<k;i++)
	{
		a=js[i];
		for(b=i-1;b>=0;b--)
		{
			if(a<js[b])
			{
				js[b+1]=js[b];
				js[b]=a;
			}
			else
			{
				js[b+1]=a;
				break;
			}
		}
	}
	for(i=0;i<k-1;i++)
	{
		my_printf("%d,",(js[i]));
	}
		my_printf("%d",(js[k-1]));	
	return 0;
}
