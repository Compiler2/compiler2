#define NUM_ITER 560

#include <header.h>

int main_bench()
{
	int m,n[1000][1000],ai,aj,zi,zj,i,j,s;
	my_scanf("%d",&m);
	for (i=0;i<m;i++)
	{
	for(j=0;j<m;j++)
	{
	my_scanf("%d",&n[i][j]);
		if (n[i][j]==0)
		{
		zi=i;zj=j;
		}
	
	}
	}
	for (i=(m-1);i>=0;i--)
	{
	for(j=(m-1);j>=0;j--)
	{

		if (n[i][j]==0)
		{
		ai=i;aj=j;
		}
	
	}
	}
    s=(zj-aj-1)*(zi-ai-1);
	my_printf("%d\n",s);
	return 0;
}