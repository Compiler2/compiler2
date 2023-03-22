#define NUM_ITER 54892

#include <header.h>

int main_bench()
{
	int n,a[101],i,max,second;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
		{my_scanf("%d",&a[i]);}
	if(a[1]>a[2])
		{max=a[1];
		second=a[2];}
	else
		max=a[2];
		second=a[1];
	if(n<=2)
		{my_printf("%d\n",max);
		my_printf("%d\n",second);}
	else
	{	for(i=3;i<=n;i++)
		{	if(a[i]>max)
			{second=max;
			max=a[i];}
			else if(max>a[i]&&second<a[i])
				second=a[i];
		}
		my_printf("%d\n",max);
		my_printf("%d\n",second);}
	return 0;
}