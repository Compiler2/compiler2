#include <header.h>


int main_bench()
{
	int a[6][6];
	int i,j,k=0;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	int flag=0,m,p,c;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			flag=0;
			for(m=1;m<=5;m++)
			{
				if(a[i][j]>=a[i][m])
					flag=flag+1;
			}
			if(flag==5)
			{
				c=0;
				for(p=1;p<=5;p++)
				{
					if(a[i][j]<=a[p][j])
						c=c+1;
				}
				if(c==5)
				{
					my_printf("%d %d %d",i,j,a[i][j]);
					k=k+1;
				}
			}
		}
	}
	if(k==0)
		my_printf("not found");
	
	return 0;
}
