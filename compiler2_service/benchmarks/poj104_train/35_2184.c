#define NUM_ITER 50

#include <header.h>

int m,n,a[8][8];
int judge1(int i,int j)
{
	int k,u=1;
	for(k=0;k<=n-1;k++)
		if(a[i][j]<a[i][k])
			u=0;
	return u;
}
int judge2(int i,int j)
{
	int k,u=1;
	for(k=0;k<=m-1;k++)
		if(a[i][j]>a[k][j])
			u=0;
	return u;
}
int main_bench()
{
	int i,j,u=0;
	my_scanf("%d,%d",&m,&n);
	for(i=0;i<=m-1;i++)
		for(j=0;j<=n-1;j++)
			my_scanf("%d",&a[i][j]);
	for(i=0;i<=m-1;i++)
		for(j=0;j<=n-1;j++)
		{
			if(judge1(i,j)==1&&judge2(i,j)==1)
			{
				u=1;
				my_printf("%d+%d",i,j);
			}
		}
	if(u==0)
		my_printf("No");
}
	