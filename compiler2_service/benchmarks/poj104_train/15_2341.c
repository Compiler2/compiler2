#define NUM_ITER 697

#include <header.h>

main_bench()
{
	int n,a,i,j,s=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&a);
			if(a==0)
				break;
		}
		for(j++;j<n;j++)
		{
			my_scanf("%d",&a);
			if(a==255)
				s++;
			else
				break;
		}
		for(j++;j<n;j++)
		{
			my_scanf("%d",&a);
		}
	}
	my_printf("%d",s);
} 