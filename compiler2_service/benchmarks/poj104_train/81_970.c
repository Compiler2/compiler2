#define NUM_ITER 229738

#include <header.h>

int p(int x,int y,int c[5][5])
{
	int i=0,b;
	if(x>=0&&x<5&&y>=0&&y<5)
	{
	for(i=0;i<5;i++)
	{
		b=c[x][i];
		c[x][i]=c[y][i];
		c[y][i]=b;
	}
	return(1);
	}
	else
		return(0);
}
int main_bench()
{
	int n,m,a[5][5],i,j,k=0,l=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	}
	my_scanf("%d%d",&n,&m);
	if(p(m,n,a)==1)
    	for(i=0;i<5;i++)
		{
			my_printf("%d",a[i][0]);
			for(j=1;j<5;j++)
			{
				my_printf(" %d",a[i][j]);
			}
			my_printf("\n");
		}
	else
		my_printf("error");
}