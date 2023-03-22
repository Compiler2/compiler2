#include <header.h>

int f(int array[][5],int n,int m)
{
	if(m>4||n>4)
		return (0);
	else
		return (1);
}
int main_bench()
{
	int array[5][5],i,j,n,m,mid;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&array[i][j]);
		my_scanf("%d%d",&n,&m);
		if(f(array,n,m))
		{
			for(j=0;j<5;j++)
			{
				mid=array[n][j];
				array[n][j]=array[m][j];
				array[m][j]=mid;
			}
			for(i=0;i<5;i++)
			{
				for(j=0;j<4;j++)
					my_printf("%d ",array[i][j]);
				my_printf("%d",array[i][4]);
				my_printf("\n");
			}
		}
		else
			my_printf("error");
}
			
				
	

