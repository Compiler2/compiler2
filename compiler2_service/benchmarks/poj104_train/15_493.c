#define NUM_ITER 658

#include <header.h>

int main_bench()
{
	int A[1000][1000];
	int n,a,b,c,d;
	int i=0,j=0;
	my_scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			my_scanf ("%d",&A[i][j]);
				if (A[i][j]==0&&A[i][j-1]!=0&&A[i-1][j]!=0)
				{
					a=i;
					b=j;
				}
				if (A[i][j]==0&&A[i][j-1]==0&&A[i-1][j]==0)
				{
					c=i;
					d=j;
				}
		}
	}

	my_printf("%d",(c-a-1)*(d-b-1));
	return 0;
}

