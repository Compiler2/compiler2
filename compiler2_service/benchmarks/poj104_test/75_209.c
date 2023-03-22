#include <header.h>

struct men
{
	int x;
	int y;
}time[1000];

int main_bench()
{
	int i=0,j,max=0,n,sum;
	char c;
	do
	{
		my_scanf("%d",&time[i].x);
		i++;
	}while((c=getchar())!='\n');
	i=0;
	do
	{
		my_scanf("%d",&time[i].y);
		i++;
	}while((c=getchar())!='\n');
	n=i;
	my_printf("%d ",n);
	for(i=0;i<1000;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			if(i>=time[j].x&&i<time[j].y)
				sum++;
		}
		if(sum>max)
			max=sum;
	}
	my_printf("%d\n",max);
	return 0;
}