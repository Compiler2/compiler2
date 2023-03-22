#define NUM_ITER 217129

#include <header.h>

int matrix(int shuzu[5][5],int n,int m)
{
	int i;
	int temp=0;
	if (n>=0&&n<=4&& m>=0&&m<5)
	{
		for(i=0;i<5;i++)
		{
			temp=shuzu[n][i];
			shuzu[n][i]=shuzu[m][i];
			shuzu[m][i]=temp;
		}
	return 1;
	}
	else 
	{
		return 0;
	}
}
int main_bench()
{
	int shuzu[5][5];
	int n;
	int m;
	int i;
	int j;
	int k;
	int temp;
	for (i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&shuzu[i][j]);
		}
	}
	my_scanf("%d %d",&n,&m);
	if (matrix(shuzu,n,m)==0)
		my_printf("error");
	else if (matrix(shuzu,n,m)==1)
	{
		for(i=0;i<5;i++)
		{
			temp=shuzu[n][i];
			shuzu[n][i]=shuzu[m][i];
			shuzu[m][i]=temp;
		}
		for(k=0;k<5;k++)
		{
			for(j=0;j<5;j++)
			{
				my_printf("%d",shuzu[k][j]);
				if(j<4)
				{
					my_printf(" ");
				}
			}
			my_printf("\n");
		}
	}
	return 0;
}







