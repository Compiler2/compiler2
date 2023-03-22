#include <header.h>

int main_bench()
{
	int n,i,j;
	char gen[1000][1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&gen[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<(int)strlen(gen[i]);j++)
		{
			if (gen[i][j]==65)
			{my_printf("T");}
			if (gen[i][j]==84)
			{my_printf("A");}
			if (gen[i][j]==67)
			{my_printf("G");}
			if (gen[i][j]==71)
			{my_printf("C");}
		}
		{my_printf("\n");}	
	}
	
	return 0;
}
