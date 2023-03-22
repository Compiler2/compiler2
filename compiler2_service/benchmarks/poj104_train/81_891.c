#define NUM_ITER 219472

#include <header.h>


int main_bench()
{
	int a[5][5],i=0,j=0,c,b,d[5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d%d",&c,&b);
	
	if((c>4)||(b>4)||(c<0)||(b<0))
	{
		my_printf("error\n");
	}
	if((c>=0)&&(c<=4)&&(b>=0)&&(b<=4))
	{
		for(i=0;i<5;i++)
		{
			d[i]=a[c][i];
			a[c][i]=a[b][i];
			a[b][i]=d[i];
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			{
				my_printf("%d ",a[i][j]);
			}
			my_printf("%d",a[i][4]);
			my_printf("\n");
		}
	}
}
