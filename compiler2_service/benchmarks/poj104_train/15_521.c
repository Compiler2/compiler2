#define NUM_ITER 570

#include <header.h>


int main_bench()
{
	int i,j,n,m=0,k=0,p;
	my_scanf("%d",&n);
	int a[1000][1000];
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
			{
				m=m+1;
			}
		}
		if(m!=0)
			break;
	}
		for(j=0;j<n;j++)
		{
			for(i=0;i<n;i++)
			{
				if(a[i][j]==0)
				{
					k=k+1;
				
				}
			}
			if(k!=0)
				break;
		}
            p=m*k-2*m-2*k+4;
			my_printf("%d\n",p);

	return 0;
}
