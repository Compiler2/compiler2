#define NUM_ITER 53718

#include <header.h>


main_bench()
{
	int max1,max2,n,i,j,a[100];
	my_scanf("%d\n",&n);
	max1=0;
	max2=0;
    for (i=1;i<=n;i++) 
	{
		my_scanf("%d",&a[i]);
		if (a[i]>max1) 
		{
			max1=a[i];
			j=i;
		}
	}
    for (i=1;i<=n;i++)
	{
		if (i!=j) 
			if (a[i]>max2) max2=a[i];
	}
	my_printf("%d\n%d\n",max1,max2);
}