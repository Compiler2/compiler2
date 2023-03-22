#define NUM_ITER 1445

#include <header.h>

int main_bench()
{
	int counts;int sum;
	int a[100];
	int n;int i,c;int m;
	my_scanf("%d",&n);
	while(n--)
	{
		c=0;
		sum=0;
		my_scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			my_scanf("%d",&a[i]);
		}
		for(i=0;i<m;i++)
		{
			c=3*m;
			if(a[i]+i*3>60)
			{
				c=i*3;
				break;
			}
			else if(a[i]+(i+1)*3>60)
			{
				c=60-a[i];
				break;
			}
		}
		my_printf("%d\n",60-c);
	}
}