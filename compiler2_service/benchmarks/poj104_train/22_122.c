#include <header.h>

int main_bench()
{
	int a[301],i,max,max2=0;
	char c;
	my_scanf ("%d",&a[0]);
	max=a[0];
	for (i=1;;i++)
	{
		c=getchar();
		if (c=='\n')
			break;
		my_scanf("%d",&a[i]);
		if (a[i]>=max)
		{
			if (a[i]>max) 
			{
				max2=max;
				max=a[i];
			}
		}
		else
		{
			if (a[i]>=max2)
				max2=a[i];
		}
	}
	if (i==1 || max2==0)
		my_printf("No\n");
	else 
		my_printf("%d\n",max2);
}