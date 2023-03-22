#define NUM_ITER 233961

#include <header.h>

int main_bench()
{
	int zu[5][5],n,m,h[5][5];
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&zu[i][j]);
		}
	}
	my_scanf("%d %d",&n,&m);
	if(n<0||n>4||m<0||m>4) my_printf("error");
	else
	{
		for(i=0;i<5;i++)
		{
			h[0][i]=zu[m][i];
			zu[m][i]=zu[n][i];
			zu[n][i]=h[0][i];
		}
		for(i=0;i<5;i++)
		{
			my_printf("%d",zu[i][0]);
			for(j=1;j<5;j++)
			{
			my_printf(" %d",zu[i][j]);	

			}
			my_printf("\n");
		}
	}

	
	return 0;
}


