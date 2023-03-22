#define NUM_ITER 223298

#include <header.h>

int a[5][5];
int gmm(int n,int m)
{
	int t,i;
	if(n>=0&&n<5&&m>=0&&m<5)
	{
		for(i=0;i<5;i++)
		{
		t=a[m][i];
		a[m][i]=a[n][i];
		a[n][i]=t;
		}

		return 1;
	}
	else
		return 0;
}
int main_bench()
{

	int n,m,i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&n,&m);
	if(gmm(n,m)==0)
		my_printf("error\n");
	else
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				my_printf("%d",a[i][j]);
				if(j!=4)
					my_printf(" ");
			}
			my_printf("\n");
		}
	}
}

