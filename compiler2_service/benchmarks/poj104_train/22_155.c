#define NUM_ITER 1615719

#include <header.h>

int main_bench()
{
	int i,t=0,a[50],max,lower,k=0;
	char c[50];
	do
	{
		my_scanf("%d%c",&a[t],&c[t]);
		t++;
	}
	while(c[t-1]==',');
	max=a[0];
	for(i=0;i<=t-1;i++)
	{
		if(a[i]>max)max=a[i];
		
	}
	for(i=0;i<=t-1;i++)
	{
		if(a[i]<max)k=k+1;
		else
			k=k+0;
	}
	if(k==0)
		my_printf("No\n");
	else
	{
		for(i=0;i<=t-1;i++)
		{
			if(a[i]<max)
			{
				lower=a[i];
				break;
			}
			else
				continue;
		}
		for(i=0;i<=t-1;i++)
		{
			if((a[i]>lower)&&(a[i]<max))
				lower=a[i];
		}
		my_printf("%d\n",lower);
	}
}




