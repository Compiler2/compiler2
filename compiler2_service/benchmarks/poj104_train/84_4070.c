#include <header.h>


int main_bench()
{
	int n,i,x[100];
	int max=0,secondmax=0;
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		my_scanf("%d",&x[i]);
		if(x[i]>=max)
		{
		secondmax=max;
		max=x[i];
		}
		if(x[i]>secondmax&&max>x[i])
		{
			secondmax=x[i];
		}
		
	}
	my_printf("%d\n%d\n",max,secondmax);
	return 0;
}