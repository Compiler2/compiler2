#define NUM_ITER 1668724

#include <header.h>

int main_bench()
{
	int a[10000],i=1,m,max,max2=0;
	char b;
	my_scanf("%d%c",&a[1],&b);
	max=a[1];
	while(b==',')
	{
		i++;
		my_scanf("%d%c",&a[i],&b);
		if(max<a[i])
		max=a[i];
	}
	for(m=1;m<=i;m++)
	{
		if(a[m]==max)
		continue;
		else
		{
			max2=a[m];
		}
	}
	if(max2==0)
	my_printf("No");
	else
	{
		for(m=1;m<=i;m++)
		{
			if(a[m]==max)
			continue;
			else
			{
				if(max2<a[m])
				max2=a[m];
			}
		}
		my_printf("%d",max2);
	}
	return 0;
} 