#include <header.h>


int main_bench()
{
	int n,i,max,secondmax;
	int num[100];

	my_scanf("%d",&n);

	my_scanf("%d",&num[0]);
	max=num[0];
	secondmax=num[0];

	for(i=1;i<n;i++)
	{
		my_scanf("%d",&num[i]);

		if(num[i]>max)
			max=num[i];
		else if(num[i]>secondmax)
			secondmax=num[i];
	}

	my_printf("%d\n%d\n",max,secondmax);
}
