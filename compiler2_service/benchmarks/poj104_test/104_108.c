#define NUM_ITER 808803

#include <header.h>


int main_bench()
{
	int a[600],b[600];
	int na,nb;
	int i;

	my_scanf("%d %d",&a[0],&b[0]);
	if (a[0]!=1 && b[0]!=1)
	{
		for (i=0;;i++)
		{
		 a[i+1]=a[i]/2;
		 if (a[i+1]==1)
		{
			na=i+1;
			break;
		}
		}
	    for (i=0;;i++)
		{
		 b[i+1]=b[i]/2;
		if (b[i+1]==1)
		{
			nb=i+1;
			break;
		}
		}
	    for(i=0;;i++)
		{
		 if (a[na]==b[nb])
		 {
			na=na-1;
			nb=nb-1;
		 }
		 else
		 {
			my_printf("%d",a[na+1]);
			break;
		 }
		}
	}
	else
		my_printf("1");
}

