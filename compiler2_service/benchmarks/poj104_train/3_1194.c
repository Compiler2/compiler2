#define NUM_ITER 58087

#include <header.h>

int main_bench()
{
	int n,k,i,j,x[1000],a,m=0;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(i<j)
			{
				a=x[i]+x[j];
				if(a==k)
				{
					m++;
					break;
				}
			}
		}
		if(a==k)
			break;
	}
	if(m!=0)
		my_printf("yes");
	else{my_printf("no");}
	return 0;
}