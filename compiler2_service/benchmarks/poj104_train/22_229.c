#define NUM_ITER 1440595

#include <header.h>

int main_bench()
{
	int a[300];
	int i=1,j,max,max2,n=0;
	my_scanf("%d",&a[0]);
	while((my_scanf(",%d",&a[i])>0))
		i++;
	if(i==1) my_printf("No\n");
	else
	{
		max=a[0];
		max2=0;
		for(j=1;j<i;j++)
		{
			if(max<a[j]) 
				max=a[j];
		}
		for(j=0;j<i;j++)
		{
			if(a[j]<max&&a[j]>max2)
			max2=a[j];
		}
		if(max2==0) my_printf("No\n");
		else
		my_printf("%d",max2);
	}
}

