#define NUM_ITER 558

#include <header.h>

int main_bench()
{
    int i,j,row,col,m,n;
	int a[100][100];
	my_scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			my_scanf("%d",&a[i][j]);
		if(row<=col){
	for(m=0;m<row;m++)
		for(n=0;n<=m;n++)
			my_printf("%d\n",a[n][m-n]);
	for(m=row;m<col;m++)
		for(n=0;n<row;n++)
			my_printf("%d\n",a[n][m-n]);
	for(m=col;m<(col+row);m++)
		for(n=(m-col+1);n<row;n++)
			my_printf("%d\n",a[n][m-n]);
		}
		else{
	for(m=0;m<col;m++)
		for(n=0;n<=m;n++)
			my_printf("%d\n",a[n][m-n]);
	for(m=col;m<row;m++)
		for(n=col-1;n>=0;n--)
			my_printf("%d\n",a[m-n][n]);
	for(m=row;m<(col+row);m++)
		for(n=col-1;n>=(m-row+1);n--)
			my_printf("%d\n",a[m-n][n]);
		}
		return 0;
}

