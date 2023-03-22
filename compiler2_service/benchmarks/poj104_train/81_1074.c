#define NUM_ITER 209902

#include <header.h>

int f(int*p[5][5],int m,int n)
{
	if(m>=0&&m<=4&&n>=0&&n<=4)
	{
		int b[5];
		int j;
		for(j=0;j<=4;j++)	
		{
			b[j]=*p[m][j];
			*p[m][j]=*p[n][j];
			*p[n][j]=b[j];
		}
		return 1;
	}
	else return 0;
}
int main_bench()
{
	int a[5][5],*p[5][5];
	int x,y;
	for(x=0;x<=4;x++)
	{
		for(y=0;y<=4;y++)
		{
			my_scanf("%d",&a[x][y]);
			p[x][y]=&a[x][y];
		}
	}
	int m,n,re;
	my_scanf("%d %d",&m,&n);
	re=f(p,m,n);
	if(re==0) my_printf("error\n");
	else
	{
		for(x=0;x<=4;x++)		
		{
			for(y=0;y<=3;y++)
			{
				my_printf("%d ",*p[x][y]);				
			}
			my_printf("%d\n",*p[x][y]);
		}
	}
}
