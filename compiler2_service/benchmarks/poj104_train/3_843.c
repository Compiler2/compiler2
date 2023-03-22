#define NUM_ITER 53634

#include <header.h>

int main_bench()
{
	int a[1000],i,j,n,k;
	int x=0,y=0;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==k) 
			{
				x=1;
				y=1;
			}
			if(x==1) break;          
		}
		if(y==1) break;
	}
	if(x==1) my_printf("yes");
	if(x==0) my_printf("no");
	return 0;
}