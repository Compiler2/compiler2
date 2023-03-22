#define NUM_ITER 587

#include <header.h>

int main_bench()
{
	int n,a[100][100],i,j;
	int k=0,l=0,m=0;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
				k++,m=j;
		}
		if(a[i][m]==0)
			l++;
	}
	k=((k-4)/2-l+2)*(l-2);
	my_printf("%d\n",k);
}

