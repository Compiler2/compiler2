#define NUM_ITER 5469

#include <header.h>

int main_bench()
{
	int n,mm,maxj,i,j,k,max;
	my_scanf("%d",&n);
	int * height=(int*)malloc(sizeof(int)*n);
	int * amount=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&height[i]);
		amount[i]=1;
	}
	max=1;
		for(j=n-1;j>=0;j--)
		{
			maxj=1;
			for(k=j+1;k<n;k++)
			{
				
				if(height[j]>=height[k])
				{					
					amount[j]=amount[k]+1;
					if(amount[j]>=maxj)
					{
						maxj=amount[j];
					}
				}
			}
			amount[j]=maxj;
			if(maxj>=max)
			{
				max=maxj;
			}
	}
	my_printf("%d",max);
	return 0;
}
