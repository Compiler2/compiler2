#define NUM_ITER 47408

#include <header.h>

int main_bench()
{
	int n,i,j,l,big,smaller;
	int a[10011];
    my_scanf("%d\n",&n);
	for(i=0;i<n-1;i++)
	my_scanf("%d\n",&a[i]);
	i=n-1;
	my_scanf("%d",&a[i]);

	big=a[0];
	smaller=a[0];
	for(j=1;j<n;j++)
	{
		if(a[j]>=big)
			big=a[j];
	}
	for(l=0;l<n;l++)
	{
		if(a[l]>=smaller&&a[l]<big)
			smaller=a[l];
	}
	
	my_printf("%d\n%d",big,smaller);
	}