#define NUM_ITER 31

#include <header.h>

int main_bench() 
{
	int a[100][100],b[100][100],c[100][100]={0};
	int i,j,k,n,m,p,q;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&p,&q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			my_scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<m;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
		    if(j==0)
		    {
			my_printf("%d",c[i][j]);
		    }
			else
			{
			my_printf(" %d",c[i][j]); 
			 }
		}
		my_printf("\n");
	}
} 