#define NUM_ITER 4745

#include <header.h>

main_bench()
{
	int a[300]={0},b[300]={0};
	int *p,*q;
	int n,i,j,m;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	p=a;
	q=b;
	for(i=0;i<n;i++)
	{
		if (*(q+i))
			continue;
		m=0;
		for (j=0;j<n;j++)
		{
			if (*(q+j))
				continue;
			if (*(p+i)==*(p+j))
			{
				m++;
			    if (m>1)
				    *(q+j)=1;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		if (*(q+i))
			continue;
		if (i)
			my_printf(",");
		my_printf("%d",*(p+i));
	}
	my_printf("\n");
}