#define NUM_ITER 1638648

#include <header.h>


int judge1(int x)
{
	if(x==1)
		return 0;
	else
	{
		int w=1,k=2;
		while(k*k<=x)
		{
			if(x%k==0)
			{
				w=0;
				break;
			}

			k++;
		}

		return w;
	}
}

int judge2(int x)
{
	int x1=x,y=0;
	while(x1>0)
	{
		y=y*10+x1%10;
		x1/=10;
	}

	if(x==y)
		return 1;
	else
		return 0;
}

int main_bench()
{
	int m,n;
	my_scanf("%d%d",&m,&n);

	int k,t=0;
	for(k=m;k<=n;k++)
		if(judge1(k)&&judge2(k))
		{
			if(t)
				my_printf(",");

			my_printf("%d",k);

			t++;
		}

	if(!t)
		my_printf("no");

	my_printf("\n");
}