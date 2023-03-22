#define NUM_ITER 675

#include <header.h>

int main_bench()
{
	int loc[1000][1000];
	int m,n,p,q;
	int a;
	my_scanf("%d", &a);
	int i,j;
	for (i=0;i<a;i++)
	{
		for (j=0;j<a;j++)
		{
			my_scanf("%d",&loc[i][j]);
		}
	}
	for (i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if (loc[i][j]==0)
			{
				m=i;
				n=j;
				break;
			}
		}
		if (loc[m][n]==0)
		{
			break;
		}
	}
	for (i=a-1;i>=0;i--)
	{
		for (j=a-1;j>=0;j--)
		{
			if (loc[i][j]==0)
			{
				p=i;
				q=j;
				break;
			}
		}
		if (loc[p][q]==0)
		{
			break;
		}
	}
	int s;
	s=(p-m-1)*(q-n-1);
	my_printf("%d\n",s);
}