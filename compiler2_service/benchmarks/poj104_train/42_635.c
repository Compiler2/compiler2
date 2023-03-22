#define NUM_ITER 47425

#include <header.h>

int main_bench()
{
	int *p,i,j,n,m,a[200000],k=0;
	my_scanf ("%d\n",&n);
	p=a;
	for (i=0;i<n;i++)
	{
		my_scanf ("%d",(p+i));
	}
	my_scanf ("%d",&m);
	for (i=0,p=a;i<n;i++)
	{
		if (*(p+i)==m)
		{
			k++;
			for (j=i;j<n;j++)
			{
				*(p+j)=*(p+j+1);
			}
			i--;
		}
	}
	for (i=0,p=a;i<n-k-1;i++)
	{
		my_printf ("%d ",*(p+i));
	}
	my_printf ("%d",*(p+n-k-1));
}