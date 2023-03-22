#define NUM_ITER 54731

#include <header.h>

int main_bench()
{
	int n,i,j=0,k;
	int a[100000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	my_scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]!=k)
		{
 			a[j]=a[i];
            if(j==0)
			{
				my_printf("%d",a[j]);
			}
			if(j!=0)
			{
				my_printf(" %d",a[j]);
			}
			j++;

		}

	}	

}
