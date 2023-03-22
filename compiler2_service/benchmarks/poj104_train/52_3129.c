#define NUM_ITER 48147

#include <header.h>

int main_bench()
{
    int n,m,i,sz[100],sy[100];
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i>=m)
		{
		  sy[i]=sz[i-m];  
		}
		else
		{ 
		  sy[i]=sz[i+n-m]; 
		}
	}
	for(i=0;i<n-1;i++)
	{
		my_printf("%d ",sy[i]);
	}
	my_printf("%d",sy[n-1]);
	return 0;
}
