#define NUM_ITER 247267

#include <header.h>

int main_bench()
{
	int a[5][5],i,j,f=0;
	my_scanf("%d%d%d%d%d",&a[0][0],&a[0][1],&a[0][2],&a[0][3],&a[0][4]);
	my_scanf("%d%d%d%d%d",&a[1][0],&a[1][1],&a[1][2],&a[1][3],&a[1][4]);
	my_scanf("%d%d%d%d%d",&a[2][0],&a[2][1],&a[2][2],&a[2][3],&a[2][4]);
	my_scanf("%d%d%d%d%d",&a[3][0],&a[3][1],&a[3][2],&a[3][3],&a[3][4]);
	my_scanf("%d%d%d%d%d",&a[4][0],&a[4][1],&a[4][2],&a[4][3],&a[4][4]);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>=a[i][0]&&a[i][j]>=a[i][1]&&a[i][j]>=a[i][2]&&a[i][j]>=a[i][3]&&a[i][j]>=a[i][4])
			{
				if(a[i][j]<=a[0][j]&&a[i][j]<=a[1][j]&&a[i][j]<=a[2][j]&&a[i][j]<=a[3][j]&&a[i][j]<=a[4][j])
				{
					my_printf("%d %d %d",i+1,j+1,a[i][j]);
					f=1;
				}
			}
		}
	}
	if(f==0)
		my_printf("not found");
	return 0;
}

				