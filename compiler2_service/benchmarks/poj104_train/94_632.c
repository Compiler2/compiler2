#define NUM_ITER 18406

#include <header.h>

int main_bench()
{
	int n,i,e,j;
	int k=0;
	my_scanf("%d",&n);
	int *sz=(int*)malloc(sizeof(int)*n);
	int sf[500];
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++)
	{
		if(sz[i]%2!=0)
		{
			sf[k]=sz[i];
			k++;
		}
	}
	for(j=1;j<k;j++)
	{
		for(i=0;i<k-j;i++)
		{
			if(sf[i]<sf[i+1])
			{
				e=sf[i];
				sf[i]=sf[i+1];
				sf[i+1]=e;
			}
		}
	}
	for(i=k-1;i>=0;i--)
	{
		if(i>0)
		{
			my_printf("%d,",sf[i]);
		}
		if(i==0)
		{
			my_printf("%d",sf[i]);
		}
	}
	return 0;
}