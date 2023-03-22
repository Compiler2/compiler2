#define NUM_ITER 32

#include <header.h>

int main_bench()
{
	int k=0,x=0,y=0,temp=0,sum=0,i,j,m;
	my_scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		sum=0;
		my_scanf("%d",&x);
		my_scanf("%d",&y);
		for(j=0;j<x;j++)
		{
			for(m=0;m<y;m++)
			{
				my_scanf("%d",&temp);
				if(j==0||m==0||j==x-1||m==y-1)
					sum=sum+temp;
			}
		}
		my_printf("%d\n",sum);
	}
	return 0;
}
