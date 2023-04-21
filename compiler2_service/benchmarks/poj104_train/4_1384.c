#define NUM_ITER 17

#include <header.h>

int main_bench()
{
	int a[100][100],n=0,row=0,col=0;
	my_scanf("%d %d",&row,&col);
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			my_scanf("%d",&(a[i][j]));
	n=row+col-1;
	for(int k=0;k<n;k++)
		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
			{
				if(i+j==k)
					my_printf("%d\n",a[i][j]);
			}
	return 0;
}