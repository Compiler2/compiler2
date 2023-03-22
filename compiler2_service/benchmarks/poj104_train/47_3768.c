#define NUM_ITER 53046

#include <header.h>



int main_bench()
{
	int a[100];
	int n,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	my_printf("\n");
     for(j=n-1;j>=0;j--)
	{
		my_printf("%d",a[j]);
		if(j!=0)
		{
			my_printf(" ");
		}
	}
	return 0;
}