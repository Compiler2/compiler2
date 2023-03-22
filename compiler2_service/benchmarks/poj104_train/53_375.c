#define NUM_ITER 7203

#include <header.h>


main_bench()
{
	int a[302],b[302],i,k,j,n;
	my_scanf("%d",&n);
	k=0;
	for (i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
		j=1;
		while (a[j]!=a[i]&&j<i)
			j++;
		if (j==i) 
		{
			k++;
			b[k]=a[i];
		}
	}
	for (i=1;i<k;i++)
		my_printf("%d,",b[i]);
	my_printf("%d\n",b[k]);
}