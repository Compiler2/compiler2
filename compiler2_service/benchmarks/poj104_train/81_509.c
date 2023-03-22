#include <header.h>

int array[5][5]={0};
int change(int m,int n)
{
	int i,t;
	if(n>=0&&n<5&&m>=0&&m<5)
	{
		for(i=0;i<5;i++)
		{
			t=array[n][i];
			array[n][i]=array[m][i];
			array[m][i]=t;
		}
		return 1;
	}
	else return 0;
}
int main_bench()
{
	int i,j,n,m;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&array[i][j]);
		my_scanf("%d %d",&n,&m);
		if(change(n,m))
		{
			for(i=0;i<5;i++)
				for(j=0;j<5;j++)
				{
					my_printf("%d",array[i][j]);
					if(j!=4)my_printf(" ");
					else my_printf("\n");
				}
		}
		else my_printf("error");
				return 0;
}
