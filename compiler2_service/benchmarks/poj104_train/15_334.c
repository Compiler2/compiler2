#define NUM_ITER 593

#include <header.h>

int main_bench()
{
	int n,a[1000][1000];
	int i,j,sum;
	int c=0,k=0,r=0,t=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d ",&a[i][j]);
            if(a[i][j]==0&&a[i][j-1]==255&&a[i-1][j]==255)
            {
             c=i;
			 k=j;
			}
			if(a[i][j]==0&&a[i][j-1]==0&&a[i-1][j]==0)
			{
			 r=i;
			 t=j;
			}
		}
	}

    sum=(r-c-1)*(t-k-1);
	my_printf("%d\n",sum);
	return 0;
}