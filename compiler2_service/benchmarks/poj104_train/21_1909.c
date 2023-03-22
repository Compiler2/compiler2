#define NUM_ITER 4911

#include <header.h>

int main_bench()
{

	

	int a[300];
	int n,i,j,k,l,m;
	double s,t,q;
	my_scanf ("%d",&n);
	for (i=0;i<n;i++)
		my_scanf ("%d",&a[i]);
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-1-i;j++)
			if (a[j]>a[j+1])
			{
				l=a[j];a[j]=a[j+1];a[j+1]=l;
			}
	}
	m=0;
	for (i=0;i<n;i++)
		m=m+a[i];
	(double) m;
	(double) a[0];
	(double) a[n-1];
	q=(double)m/n;
	s=q-(double)a[0];
	t=a[n-1]-q;
	(int) a[0];
	(int) a[n-1];
	if (t<s)
		my_printf ("%d",a[0]);
	else if (t==s)
		my_printf ("%d,%d",a[0],a[n-1]);
	else  my_printf ("%d",a[n-1]);
	return 0;
}