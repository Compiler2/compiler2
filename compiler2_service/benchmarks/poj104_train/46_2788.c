#include <header.h>

void Matrix(int a[100][100],int srow,int scol,int erow,int ecol)
{
	int i,j;
	for(i=scol;i<=ecol;i++)
		my_printf("%d\n",a[srow][i]);
	for(i=srow+1;i<=erow;i++)
		my_printf("%d\n",a[i][ecol]);
	if(erow>srow)
		for(i=ecol-1;i>=scol;i--)
			my_printf("%d\n",a[erow][i]);
	if(ecol>scol)
		for(i=erow-1;i>=srow+1;i--)
			my_printf("%d\n",a[i][scol]);
	if(erow-srow>=2&&ecol-scol>=2)
		Matrix(a,srow+1,scol+1,erow-1,ecol-1);
}
main_bench()
{
	int a[100][100],i,j,m,n;
	my_scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			my_scanf("%d",&a[i][j]);
	Matrix(a,0,0,m-1,n-1);
}