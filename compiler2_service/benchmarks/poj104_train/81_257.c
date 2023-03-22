#define NUM_ITER 236383

#include <header.h>

int main_bench()
{
	int x[5][5],m,n,i,j;
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
			my_scanf("%d",&x[i][j]);
	my_scanf("%d%d",&n,&m);
	if(n>=0&&n<=4&&m>=0&&m<=4)
	{
		for(i=0;i<=4;i++)
			{
			  j=x[n][i];
	          x[n][i]=x[m][i];
			  x[m][i]=j;
		     }
        for(i=0;i<=4;i++)
			for(j=0;j<=4;j++)
				{
					my_printf("%d",x[i][j]);
					if(j==4) 
						my_printf("\n");
					else
						my_printf(" ");
			     }
	}
	else my_printf("error");

	return 0;
}