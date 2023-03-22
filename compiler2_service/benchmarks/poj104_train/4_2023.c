#include <header.h>


int main_bench()
{
	int i,j,k,l,n,m,row,col;
	int a[200][200]={0};
	my_scanf("%d%d",&row,&col);
	for(i=1;i<=row;i++)
		for(j=1;j<=col;j++)
			my_scanf("%d",&a[i][j]);
	for(i=1;i<row+col+1;i++)
		for(j=1;j<=i;j++)
			if(a[j][i-j]!=0)
			my_printf("%d\n",a[j][i-j]);
	return 0;
}