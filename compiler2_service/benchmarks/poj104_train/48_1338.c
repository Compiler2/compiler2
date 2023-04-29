#define NUM_ITER 861

#include <header.h>

int main_bench()
{
	int m,n,i,i1,i2,a[9][9],b[9][9],h,s;
	for (i1=0;i1<9;i1++)
	{
		for (i2=0;i2<9;i2++)
		{
			a[i1][i2]=0;
			b[i1][i2]=0;
		}
	}
	my_scanf("%d%d",&m,&n);
	a[4][4]=m;
	b[4][4]=m;
	for (i=0;i<n;i++)
	{
		for (i1=0;i1<9;i1++)
		{
			for (i2=0;i2<9;i2++)
			{
				if (a[i1][i2]!=0)
				{
					b[i1][i2]+=a[i1][i2];
					if (i1-1>=0)
					{
						if (i2-1>=0)
							b[i1-1][i2-1]+=a[i1][i2];
						b[i1-1][i2]+=a[i1][i2];
						if (i2+1<9)
							b[i1-1][i2+1]+=a[i1][i2];
					}
					if (i2-1>=0)
						b[i1][i2-1]+=a[i1][i2];
					if (i2+1<9)
						b[i1][i2+1]+=a[i1][i2];
					if (i1+1<9)
					{
						if (i2-1>=0)
							b[i1+1][i2-1]+=a[i1][i2];
						b[i1+1][i2]+=a[i1][i2];
						if (i2+1<9)
							b[i1+1][i2+1]+=a[i1][i2];
					}
				}
			}
		}
		for (h=0;h<9;h++)
		{
			for (s=0;s<9;s++)
			{
				a[h][s]=b[h][s];
			}
		}
		
	}
		for (i1=0;i1<9;i1++)
		{
		for (i2=0;i2<9;i2++)
		{
			if (i2!=8)
				my_printf("%d ", a[i1][i2]);
			else
				my_printf("%d\n", a[i1][i2]);
		}
	}
	return 0;
}
