#define NUM_ITER 62848

#include <header.h>


int n;
int num[100];
int i;
int min=10000,max=-1,total=0;
int main_bench()
{
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&num[i]);
		if(num[i]<min)
			min=num[i];
		if(num[i]>max)
			max=num[i];
		total+=num[i];
	}
	if(total-min*n==max*n-total)
		my_printf("%d,%d\n",min,max);
	else
		if(total-min*n<max*n-total)
		{
			my_printf("%d\n",max);
		}
		else if(total-min*n>max*n-total)
			my_printf("%d\n",min);
}
