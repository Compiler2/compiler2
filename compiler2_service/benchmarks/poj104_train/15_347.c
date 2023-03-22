#define NUM_ITER 581

#include <header.h>

int main_bench()
{
	int n,i,j,a[100][100],p,q,r,s,mj;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			my_scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0&&a[i][j+1]==0&&a[i+1][j]==0&&a[i+1][j+1]!=0)
			{
				p=j;
				q=i;
			}
			if(a[i][j]==0&&a[i-1][j]==0&&a[i][j-1]==0&&a[i-1][j-1]!=0)
			{
				r=i;
				s=j;
			}
		}
		mj=(r-p-1)*(s-q-1);
		my_printf("%d",mj);
		return 0;
}