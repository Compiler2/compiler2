#define NUM_ITER 6587

#include <header.h>

int main_bench()
{
	 long a[300];
     int n,i,j;
	my_scanf("%d",&n);
	my_scanf("%ld",&a[0]);
	my_printf("%ld",a[0]);
	for(i=1;i<n;i++)
	{
		my_scanf("%ld",&a[i]);
	    for(j=0;j<i;j++)
		{
			if(a[i]==a[j])break;
		}
		if(j>=i)
			my_printf(",%d",a[i]);
	}
		return 0;
}
