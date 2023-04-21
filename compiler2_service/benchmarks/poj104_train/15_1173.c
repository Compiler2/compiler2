#define NUM_ITER 691

#include <header.h>

int main_bench()
{
	int n,a=-1,b=-1,c,d,x,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&x);
			if(x==0)
			{
				c=i;
				d=j;
				if((a==-1)&&(b==-1))
				{
					a=i;b=j;
				}
			}
		}
	}
	x=(c-a-1)*(d-b-1);
	my_printf("%d",x);
	return 0;
}