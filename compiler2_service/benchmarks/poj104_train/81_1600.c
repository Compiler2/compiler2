#include <header.h>



int main_bench()
{
    int from[5][5];
	int i,j;
	for (i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d", &from[i][j]);
		}
	}
    int n,m;
    my_scanf("%d %d", &n,&m);
	if(n<5&&m<5)
	{
		int a[5];
		for(i=0;i<5;i++)
		{
			a[i]=from[n][i];
			from[n][i]=from[m][i];
			from[m][i]=a[i];
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(j!=4)
				{
				my_printf("%d ", from[i][j]);
				}
				else if(j==4)
				{
				my_printf("%d", from[i][j]);
				}
			}
			my_printf("\n");
		}
	}
	else
	{
		my_printf("error");
	}
}
	
	
    
    
