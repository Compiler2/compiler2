#define NUM_ITER 5193

#include <header.h>

int main_bench()
{   
	int e,k,i,n,m=1;
	int sz[500];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}

	for(k=1;k<n+1;k++)
	{
		for(i=0;i<n-k;i++)
		{
			if(sz[i]>sz[i+1])
			{
				e=sz[i+1];
				sz[i+1]=sz[i];
				sz[i]=e;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(sz[i]%2==1){
			if(m==1){
		    my_printf("%d",sz[i]);
			}else{
				my_printf(",%d",sz[i]);}
		m=m+1;
		}
	}
	return 0;
}