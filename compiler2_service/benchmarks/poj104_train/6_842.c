#define NUM_ITER 30

#include <header.h>


int main_bench()
{
	int k,m,n,a[100][100];
	int i,j,r;
	
	my_scanf ("%d",&k);
	for (i=0;i<k;i++)
	{
                int b=0,c=0,d=0,e=0,sum=0;
		my_scanf ("%d%d",&m,&n);
		for (j=0;j<m;j++)
		{
			for (r=0;r<n;r++)
			{
				my_scanf ("%d",&a[j][r]);
			}
		}
		for (j=0;j<m;j++)
		{
			b+=a[j][0];
			d+=a[j][n-1];
		}
		for (r=1;r<n-1;r++)
		{
			c+=a[m-1][r];
			e+=a[0][r];
		}
		sum=b+c+d+e;
		my_printf ("%d\n",sum);
	}
	return 0;
}