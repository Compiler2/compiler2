#define NUM_ITER 7508

#include <header.h>

int main_bench()
{
	int n,i,j,b;
	int a[20000];
    my_scanf("%d",&n);
	i=0;
	j=0;
	b=0;
	while(i<n)
	{
		my_scanf("%d",&a[i]);
		i++;
	}
	i=1;
	my_printf("%d",a[0]);
	while(i<n)
	{
	    while((j<i)&&(b==0))
		{
			if(a[j]!=a[i]) j++;
			else b=1;
		}
		if(b==0) my_printf(" %d",a[i]);
		i++;
		j=0;
		b=0;
	}
	return 0;
}

				  
