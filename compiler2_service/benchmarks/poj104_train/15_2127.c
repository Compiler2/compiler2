#define NUM_ITER 580

#include <header.h>

int main_bench()
{
	int n,j,i,count,key;
	my_scanf("%d",&n);

	count=0;
	key=0;
	int a[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&a[j]);
			
		}
		for(j=0;j<n;j++)
		{
			if(a[j]==0&&a[j+1]==0)
			{
				break;
			}
			if(a[j]==0)
				key=1-key;
			if(a[j]*key!=0)
				count=count+1;
		}


		
	}
	my_printf("%d",count);
	return 0; 
}
