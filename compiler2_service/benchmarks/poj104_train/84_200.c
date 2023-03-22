#include <header.h>

int main_bench()
{
    int n,a[100],i=0,max=0,max2=0;
	my_scanf("%d",&n);
	while(i<n)
	{
		my_scanf("%d",&a[i]);
		if(a[i]>max&&a[i]>max2)
		{
			max2=max;
			max=a[i];
        }    
		else if(a[i]<max&&a[i]>max2)
			max2=a[i];
		i++;
	}
    my_printf("%d\n%d\n",max,max2);
	return 0;
}


