#define NUM_ITER 5186

#include <header.h>

int main_bench()
{
	int n,i,j,e,m=0;
	int a[501];
	my_scanf ("%d\n",&n);
	for (i=0;i<n;i++)
	{
		my_scanf ("%d",&a[i]);
	}
	for (i=1;i<=n;i++)
	{
		for (j=0;j<n-i;j++)
		{
			if (a[j]>a[j+1])
			{
				e=a[j+1];
				a[j+1]=a[j];
				a[j]=e;
			}
		}
	}
	for (j=0;j<n;j++)
	{
		if (a[j]%2!=0)
		{
		 if (m==0)
		 {
			 my_printf ("%d",a[j]);
		 }
		 else 
		 {
			 my_printf (",%d",a[j]);
		 }
		 m++;
		}
	}
			
	
	
	return 0;
}
