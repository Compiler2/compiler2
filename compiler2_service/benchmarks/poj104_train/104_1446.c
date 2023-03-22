#define NUM_ITER 802530

#include <header.h>

int main_bench()
{
	int exist=0,addressx[10]={0},addressy[10]={0},h,k,x,y,i=0,j=0;
	my_scanf("%d%d",&x,&y);
	while (x>=1)
	{
      addressx[i]=x;
	  
	  x=x/2;
	  i+=1;
	}

	while (y>=1)
	{
		addressy[j]=y;
	
		y=y/2;
		j+=1;
	}

	for (h=0;h<=i-1;h++)
	{
		for (k=0;k<=j-1;k++)
		{
			if (addressx[h]==addressy[k])
			{
				my_printf("%d",addressx[h]);
				exist=1;
				break;
			}
		}
		if(exist==1)
			break;

	}
}