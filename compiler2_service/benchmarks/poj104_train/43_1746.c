#define NUM_ITER 4

#include <header.h>

int main_bench()
{
	int a[10000],i,k,j,t,x,b,c,d,e=0;
	my_scanf("%d",&x);

	for(i=3,j=0;i<10000;i++)
	{
		for(e=0,k=2;k<i;k++)
		{
			t=i/k;
			if(t*k==i)
			{
				e=1;
				break;		
			}
		}
		if(e==0)
		{
			a[j]=i;
			j++;
		}
	}
	for(b=0;b<=10000;b++)
	{
		c=x-a[b];
		if(c<x/2) break;
			for(d=0;d<10000;d++)
			{
				if(c==a[d]) 
				{
					my_printf("%d %d\n",a[b],a[d]);
					break;
				}
			}
	}
	return 0;
}
