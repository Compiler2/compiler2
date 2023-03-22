#define NUM_ITER 2196

#include <header.h>

int main_bench()
{
	int n,y[200],m1[200],m2[200],d1[200]={0},d2[200]={0};
	int i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&y[i],&m1[i],&m2[i]);
	}
	for(i=0;i<n;i++)
	{
		if(y[i]%4==0&&y[i]%100!=0||y[i]%400==0)
		{
			for(j=1;j<m1[i];j++)
			{
				if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
					d1[i]+=31;
				else if(j==2)
					d1[i]+=29;
				else
					d1[i]+=30;
			}
			for(j=1;j<m2[i];j++)
			{
				if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
					d2[i]+=31;
				else if(j==2)
					d2[i]+=29;
				else
					d2[i]+=30;
			}
		}
		else
		{
						for(j=1;j<m1[i];j++)
			{
				if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
					d1[i]+=31;
				else if(j==2)
					d1[i]+=28;
				else
					d1[i]+=30;
			}
			for(j=1;j<m2[i];j++)
			{
				if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
					d2[i]+=31;
				else if(j==2)
					d2[i]+=28;
				else
					d2[i]+=30;
			}
		}

	}
	for(i=0;i<n;i++)
	{
		if((d1[i]-d2[i])%7==0)
			my_printf("YES\n");
		else
			my_printf("NO\n");
	}
	return 0;
}


