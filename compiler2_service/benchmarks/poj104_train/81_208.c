#include <header.h>

int main_bench()
{
	int a,b,i,j;
	int s[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&s[i][j]);
		}
	}
	my_scanf("%d%d",&a,&b);
	if((a<5)&&(b<5))
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			{
				if(i==a)
				{
					my_printf("%d ",s[b][j]);
				}
				if(i==b)
				{
					my_printf("%d ",s[a][j]);
				}
				if((i!=a)&&(i!=b))
				{
					my_printf("%d ",s[i][j]);
				}
			}
			if(i==a)
			{
				my_printf("%d\n",s[b][4]);
			}
			if(i==b)
			{
				my_printf("%d\n",s[a][4]);
			}
			if((i!=a)&&(i!=b))
			{
				my_printf("%d\n",s[i][4]);
			}
		}
	}
	else
	{
		my_printf("error");
	}
	return 0;
}