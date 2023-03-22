#define NUM_ITER 201091

#include <header.h>


int main_bench()
{
	int i,j,k,s=0,x,y,a[6][6],max=0,min=1000000;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		my_scanf("%d",&a[i][j]);
	}		
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				x=j;
			}
		}
		for(j=1;j<=5;j++)
		{
			if(a[j][x]<min)
			{
				min=a[j][x];
				y=j;
			}
		}
		if(min==max)
		{
			my_printf("%d %d %d\n",y,x,max);
			s=s+1;
		}
		max=0;min=1000000;
	}
	if(s==0)
	my_printf("not found");
	return 0;
}