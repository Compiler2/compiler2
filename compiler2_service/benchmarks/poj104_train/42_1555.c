#include <header.h>

int main_bench()
{
	int N,i,k,b=0,sum=0;
	my_scanf("%d",&N);
	int *a=(int*)malloc(sizeof(int)*N);
	for(i=0;i<N;i++)
	{
		my_scanf("%d",&a[i]);	
	}
	my_scanf("%d",&k);	
	
	for(i=0;i<N;i++)
	{
		if(a[i]!=k)
		sum++;
		
	}
	for(i=0;i<N;i++)
	{
		
		if(a[i]!=k)
		{
			b++;
			if (b!=sum)
			my_printf("%d ",a[i]);
			else
			my_printf("%d",a[i]);		
		}
		
	}
	free(a);
	return 0;
	
}