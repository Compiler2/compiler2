#include <header.h>

int swap(int b[5][5],int,int);
int main_bench()
{
	int a[5][5],i,j,n,m;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d%d",&n,&m);
	if(swap(a,n,m)==0) my_printf("error\n");
	else 
	{
		for(i=0;i<5;i++)
		{
			my_printf("%d",a[i][0]);
			for(j=1;j<5;j++)
				my_printf("%2d",a[i][j]);
			my_printf("\n");
		}
	}
}
int swap(int b[5][5],int n,int m)
{
	int c,x;
	if(m>=0&&m<5&&n>=0&&n<5)
	{
		for(x=0;x<5;x++)
			c=b[m][x],b[m][x]=b[n][x],b[n][x]=c;
		return 1;
	}
	else return 0;
}