#define NUM_ITER 55901

#include <header.h>

int main_bench()
{
	int a[100],n,i,count=0;
	int *pt=a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++,pt++)
		my_scanf("%d",pt);
	for(i=n-1;i>=0;i--)
	{
		if(count==0)
		{
			my_printf("%d",*(a+i));
			count++;
		}
		else
			my_printf(" %d",*(a+i));
	}
	my_printf("\n");
	return 0;
}