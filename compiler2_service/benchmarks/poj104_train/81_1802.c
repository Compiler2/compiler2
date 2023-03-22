#include <header.h>

int change(int a[5][5],int n, int m)
{
	int i,x;
	if(n>4||n<0||m>4||m<0) return 0;
	else
	{
		for(i=0;i<5;i++)
		{
			x=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=x;
		}
		return 1;
	}
}
int main_bench()
{
	int i,j,m,n,a[5][5]={0},y;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&n,&m);
	y=change(a,m,n);
	if(y==0) my_printf("error\n");
	else{
		for(i=0;i<5;i++)
		{
			my_printf("%d",a[i][0]);
			for(j=1;j<5;j++)
			{
				my_printf(" %d",a[i][j]);
			}
			my_printf("\n");
		}
	}
	
		return 0;
}


