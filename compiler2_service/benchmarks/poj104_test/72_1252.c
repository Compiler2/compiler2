#define NUM_ITER 3238

#include <header.h>

int main_bench()
{
	int i,j,k,t,m,n;
	int a[22][22]={0},b[20][20]={0};
	my_scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			my_scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
			{
				my_printf("%d %d\n",i,j);
			}
		}
	}
	return 0;

}