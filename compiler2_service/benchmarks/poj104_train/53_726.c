#define NUM_ITER 8138

#include <header.h>

int main_bench()
{
	int n,a[300],i,j,k;
	int *p;
	my_scanf("%d",&n);
	p=a;
	for(i=0;i<n-1;i++)
		my_scanf("%d ",p+i);
	my_scanf("%d",p+n-1);
	my_printf("%d",*p);
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
			if(*(p+i)!=*(p+j))
				k=0;
			else
			{
				k=1;break;
			}
		if(k==0)
			my_printf(",%d",*(p+i));
	}
    my_printf("\n");
}
