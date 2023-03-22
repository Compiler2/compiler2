#define NUM_ITER 59635

#include <header.h>

int main_bench()
{
	int sz[100],n,max1,max2,i;
		my_scanf("%d",&n);
		max1=sz[0];
		max2=sz[1];
		for(i=0;i<n;i++)
		{
			my_scanf("%d",&sz[i]);
			if(max1<sz[i])
			{	
				max2=max1;
				max1=sz[i];
			}
			else if(max1>sz[i]&&max2<sz[i])
			{
				max2=sz[i];
			}
		}
		my_printf("%d\n%d",max1,max2);
}