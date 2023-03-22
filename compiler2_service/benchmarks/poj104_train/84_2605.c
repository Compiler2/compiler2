#include <header.h>

int main_bench()
{
	long a[101];
	int n=0;
	long i,max,big;

	my_scanf("%d",&n);
	max=0;
	big=0;
	for (i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
	
		if (a[i]>max) 
		{
			big=max;

			max=a[i];

		};
	
			
	}
	my_printf("%d\n",max);
	my_printf("%d",big);



	
	



	return 0;
}