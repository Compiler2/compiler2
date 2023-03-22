#define NUM_ITER 214644

#include <header.h>

int main_bench()
{
	int reverse(int m,int n);
	int m,n,i,j,count=0;
	int sz[6][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			my_scanf("%d ",&sz[i][j]);
	}
	my_scanf("%d %d",&m,&n);
	if(reverse(m,n)==0)
		my_printf("error\n");
	if(reverse(m,n)==1)
	{
		for(j=0;j<5;j++)
		{
			sz[5][j]=sz[m][j];
			sz[m][j]=sz[n][j];
			sz[n][j]=sz[5][j];
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				my_printf("%d",sz[i][j]);
				count++;
				if(count%5==0)
					my_printf("\n");
				else
					my_printf(" ");
			}
		}
	}
	return 0;
}
		
		

int reverse(int m,int n)
{
	if((m>=0 && m<5) && (n>=0 && n<5))
	{
		return 1;
	}else{
		return 0;
	}
}