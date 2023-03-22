#include <header.h>

int jzhh(int shuzu[5][5],int n,int m);
int main_bench()
{
	int shuzu1[5][5],x,y,j,k;
	for(j=0;j<5;j++)
	{
		for(k=0;k<5;k++)
		{
			my_scanf("%d",&shuzu1[j][k]);
		}
	}
	my_scanf("%d %d",&x,&y);
	if(jzhh(shuzu1,x,y)==0)
	{
		my_printf("error");
	}else
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<5;k++)
			{
				if(k==4)
				{
					my_printf("%d\n",shuzu1[j][k]);
				}else
				{
					my_printf("%d ",shuzu1[j][k]);
				}				
			}
		}
	}
	return 0;
}
int jzhh(int shuzu[5][5],int n,int m)
{
	int e,i;
	if((m<=4)&&(n<=4))
	{
		for(i=0;i<5;i++)
		{
			e=shuzu[m][i];
			shuzu[m][i]=shuzu[n][i];
			shuzu[n][i]=e;
		}
		return 1;
	}else
	{
		return 0;
	}
}