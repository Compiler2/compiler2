#define NUM_ITER 51864

#include <header.h>

int main_bench()
{
	int a[300],n,i,total=0,min,max;

	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		my_scanf("%d,",&a[i]);
	max=a[0];min=a[0];
	for(i=0;i<=n-1;i++)
	{
		total=total+a[i];
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}


    if((total-min*n)==(max*n-total))
		my_printf("%d,%d\n",min,max);
	else if((max*n-total)>(total-min*n))
		my_printf("%d",max);
	else
		my_printf("%d",min);
}
    
