#define NUM_ITER 51636

#include <header.h>

int main_bench()
{
	int n,k,a[1000],i,b[1000],j,c=0,d=0;
    my_scanf("%d%d",&n,&k);
	for(i=0,j=0;i<n,j<n;i++,j++)
	{
    	my_scanf("%d",&a[i]);
		b[j]=k-a[i];
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(b[j]==a[i])
			{
				c=1;
				my_printf("yes");
				d=1;
				break;
			}
		}
		if(d==1)
		{
			break;
		}
	}
	if(c==0)
	{
		my_printf("no");
	}
	return 0;
}
