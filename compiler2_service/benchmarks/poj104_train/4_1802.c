#include <header.h>





int g[100][100];


int main_bench()
{
	int r,c;
	my_scanf("%d%d",&r,&c);

	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			my_scanf("%d",g[i]+j);

	for(int j=0;j<r+c-1;j++)
	{
		for(int i=0;i<r;i++)
		{
			if(j-i>=0 && j-i<c)
				my_printf("%d\n",g[i][j-i]);
		}
	}

	return 0;
}


