#define NUM_ITER 648

#include <header.h>

int main_bench()
{
	int n,i,j,t=255,x1=-1,y1=-1,x2=-1,y2=-1;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			my_scanf("%d",&t);
			if (t==0)
			{
				if (x1<0)
				{
					x1=i;
					y1=j;
				}								if (j>y2)
					y2=j;
				x2=i;
			}
		}
	}
	my_printf("%d\n",(x2-x1-1)*(y2-y1-1));
	return 0;
}
