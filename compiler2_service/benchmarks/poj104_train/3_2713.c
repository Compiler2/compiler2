#define NUM_ITER 6050

#include <header.h>

int main_bench()
{
	int n,k;
	my_scanf("%d %d",&n,&k);
	int a[1000],i=1;
	for(i=1;i<=n;i++)
		my_scanf("%d",&a[i]);
	int ceshi=0;
	int x1,j=1;
	for(j=1;j<=n-1;j++)
	{
		for(x1=n;x1>=j+1;x1--)
		{
			if(a[j]+a[x1]==k)
			{
				ceshi=1;
			}
		}
	}
	if(ceshi==1)
		my_printf("yes");
	else
		my_printf("no");
	return 0;
}
		

