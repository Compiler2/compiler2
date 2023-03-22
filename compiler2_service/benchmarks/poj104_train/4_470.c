#include <header.h>

int main_bench()
{
	int a[101][101],b[100000];
	int row,col;
	int i,j,k=(-1),sum;
	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			my_scanf("%d",&a[i][j]);
	}
	for(sum=0;sum<=((row+col)-2);sum++)
	{
		for(i=0;i<row;i++)
		{
			if(sum-i>=0&&sum-i<col)
			{
				k+=1;
				b[k]=a[i][sum-i];
			}
		}
	}
	for(k=0;k<=row*col-1;k++)
		my_printf("%d\n",b[k]);




	return 0;


}
