#define NUM_ITER 27

#include <header.h>

int main_bench()
{
	int k,m,n,i,j,c;
	int a[100][100];
	int b[100]={0};
	my_scanf("%d",&k);
	for(c=0;c<k;c++)
	{
		my_scanf("%d%d",&m,&n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				my_scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==0 || i==m-1)
				{
					b[c]+=a[i][j];
				}
				else
				{
					if(j==0 || j==n-1)
					{
						b[c]+=a[i][j];
					}
				}
			}
		}
	}
	for(c=0;c<k;c++)
	{
		my_printf("%d\n",b[c]);
	}
	return 0;
}
