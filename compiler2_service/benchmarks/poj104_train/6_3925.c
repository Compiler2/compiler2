#include <header.h>

int main_bench()
{
	int sum,a,b,m,n,k,i,j;
	int num[100][100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		for(a=0;a<100;a++)
		{
			for(b=0;b<100;b++)
			{
				num[a][b]=0;
			}
		}
		my_scanf("%d %d",&m,&k);
		if(m==1&&k==1)
		{
			my_scanf("%d",&j);
			my_printf("%d",j);
		}
		else if(m==1&&k!=1)
		{
			for(a=0;a<k;a++)
			{
				my_scanf("%d",&num[0][a]);
				sum=sum+num[0][a];
			}
			my_printf("%d",sum);
		}
		else if(m!=1&&k==1)
		{
			for(a=0;a<m;a++)
			{
				my_scanf("%d",&num[a][0]);
				sum=sum+num[a][0];
			}
			my_printf("%d",sum);
		}
		else
		{
		for(a=0;a<m;a++)
		{
			for(b=0;b<k;b++)
			{
				my_scanf("%d",&num[a][b]);
			}
		}
		for(a=0;a<k;a++)
		{
			sum=sum+num[0][a]+num[m-1][a];
		}
		for(a=1;a<(m-1);a++)
		{
			sum=sum+num[a][0]+num[a][k-1];
		}
		my_printf("%d\n",sum);
		}
	}
}