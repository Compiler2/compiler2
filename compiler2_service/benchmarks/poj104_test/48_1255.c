#define NUM_ITER 775

#include <header.h>


int main_bench()
{
	int m,n;
	int a[9][9],b[9][9];
	int i,j,k,x,y;

	my_scanf("%d%d",&m,&n);
	memset(a,0,sizeof(a));
	a[4][4]=m;

	for(k=0;k<n;k++)
	{
		memset(b,0,sizeof(b));
		for(i=1;i<8;i++)
		{
			for(j=1;j<8;j++)
			{
				b[i][j]+=a[i][j];
				for(x=-1;x<=1;x++)
				{
					for(y=-1;y<=1;y++)
					{
						b[i+x][j+y]+=a[i][j];
					}
				}
			}
		}
		memcpy(a,b,sizeof(a));
	}

	for(i=0;i<9;i++)
	{
		for(j=0;j<8;j++){my_printf("%d ",a[i][j]);}
		my_printf("%d\n",a[i][8]);
	}
	return 0;
}
