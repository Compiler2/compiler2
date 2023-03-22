#include <header.h>


void go(int a[5][5],int n,int m)
{
	int b[5],i,j;
	if(n<0||n>4||m<0||m>4)
	{my_printf("error");}
	else
	{
		for(i=0;i<5;i++)
		{
			b[i]=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=b[i];
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				my_printf("%d",a[i][j]);
				if(j!=4)my_printf(" ");
			}
			my_printf("\n");
		}
		

	}

	
}

int main_bench()
{
	int a[5][5],i,j,n,m;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
		

	}
	my_scanf("%d %d",&n,&m);
	go(a,n,m);
	
	return 0;
}
