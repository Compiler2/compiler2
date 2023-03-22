#define NUM_ITER 7440

#include <header.h>

int main_bench()
{
	int n , k , a[1000] , YN = 0;
	my_scanf("%d%d",&n,&k);
	for(int i = 0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(int j = 0;j<n-1;j++)
	{
		for(int m = j;m<n;m++)
		{
			int he = a[j] + a[m];
			if(he == k)
			{
				YN = 1;
				break;
			}
		}
	}
	if(YN == 1)
		my_printf("yes");
	else if(YN == 0)
		my_printf("no");
	return 0;
}