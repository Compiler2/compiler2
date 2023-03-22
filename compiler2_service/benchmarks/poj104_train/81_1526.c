#include <header.h>

int main_bench()
{
	int exchange(int b[5][5],int n,int m);
	int a[5][5];
	int n,m;
	int i,j;

	for(i=0;i<5;++i)
	{
		for (j=0;j<5;++j)
		{my_scanf("%d",&a[i][j]);}
	}

	my_scanf("%d %d",&n,&m);

	if (exchange(a,n,m)==1)
	{
		for(i=0;i<5;i++)
		{
			for (j=0;j<5;j++)
			{
				my_printf("%d",a[i][j]);

				if (j!=4) my_printf(" ");
				else my_printf("\n");
			}
		}
	}
	else my_printf("error\n");
}

int exchange(int b[5][5],int n,int m)
{
	int i;

	if(n>4||n<0||m>4||m<0) return 0;
	else 
	{
		for(i=0;i<5;i++)
		{
			int c[5];
			c[i]=b[n][i];
			b[n][i]=b[m][i];
			b[m][i]=c[i];
		}
	}

	return 1;
}