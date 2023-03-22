#define NUM_ITER 575

#include <header.h>

int main_bench()
{
	int a[100][100];
    int n,row,col,i,j;
    my_scanf("%d%d",&row,&col);
	for(i=0;i<=row-1;i++)
		for(j=0;j<=col-1;j++)
			my_scanf("%d",&a[i][j]);
    if(row>=col)
	{
		for(n=0;n<=col-1;n++)
		   for(i=0;i<=n;i++)my_printf("%d\n",a[i][n-i]);
	    for(n=col;n<=row-1;n++)
           for(i=n-col+1;i<=n;i++)my_printf("%d\n",a[i][n-i]);
		for(n=row;n<=row+col-2;n++)
			for(i=n-col+1;i<=row-1;i++)my_printf("%d\n",a[i][n-i]);
	}

	else
	{
		for(n=0;n<=row-1;n++)
			for(i=0;i<=n;i++)my_printf("%d\n",a[i][n-i]);
		for(n=row;n<=col-1;n++)
			for(i=0;i<=row-1;i++)my_printf("%d\n",a[i][n-i]);
		for(n=col;n<=row+col-2;n++)
			for(i=n-col+1;i<=row-1;i++)my_printf("%d\n",a[i][n-i]);
	}
    return 0;
}