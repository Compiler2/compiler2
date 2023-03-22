#define NUM_ITER 8819

#include <header.h>

int main_bench()
{
	int i,j,k,n,a[300];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	my_scanf("%d",&a[i]);
	my_printf("\n");
 
	for (i=0;i<n;i++)
	
	 for (j=1;j<n-i;j++)
	 
		if (a[i]==a[i+j])
		{
			
			for (k=i+j;k<n-1;k++)
		 
			 a[ k]=a[k+1 ];
			 
			 j=j-1;
				n=n-1;
	 
		}
		for (i=0;i<n-1;i++)
		my_printf("%d,",a[i]);
		my_printf("%d",a[n-1]);
}