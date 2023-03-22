#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	int as[100][2]={0};
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&as[i][0],&as[i][1]);
	}
	double x,y;
	x=(double)as[0][1]/(double)as[0][0];
	for(i=1;i<n;i++)
	{
		y=(double)as[i][1]/(double)as[i][0];
		if(y-x>0.05)
		{
			my_printf("better\n");
		}
		else if(x-y>0.05)
		{
			my_printf("worse\n");
		}
		else
		{
			my_printf("same\n");
		}
	}
}
		



