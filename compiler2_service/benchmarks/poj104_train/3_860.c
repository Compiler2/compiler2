#define NUM_ITER 59413

#include <header.h>

int main_bench()
{
	int n,k,i,j,a[1000],m=0;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]+a[j]==k&&i!=j)
			{
				my_printf("yes");
				m++;
				break;
			}
			if(i==n-2&&j==n-1)
			{
				my_printf("no");
				m++;
				break;
			}
		}
		if(m==1)
		{
			break;
		}
	}
		
	return 0;
}
	