#define NUM_ITER 51592

#include <header.h>

int main_bench()
{
	int a[1000],n,k,i,j,l,m;
	my_scanf("%d",&n);
	my_scanf("%d",&k);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	l=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==i)
				continue;
			else
			{
				m=a[i]+a[j];
				if(m==k)
				{
					l++;
					break;
				}
			}
		}
		if(l>0)
			break;
	}
	if(l==0)
		my_printf("no");
	else
		my_printf("yes");
	return 0;
}
