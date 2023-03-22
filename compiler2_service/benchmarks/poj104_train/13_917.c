#define NUM_ITER 5647

#include <header.h>

int main_bench()
{
	int m,n,a[20000],i,j;
	j=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_printf("%d",a[0]);
	m=1;
	if(n>1)
	{
		do
		{

			for(i=m-1;i>=0;i--)
			{
				if(a[m]==a[i])
					j=j+1;
			}
			if(j==0)
				my_printf(" %d",a[m]);
			j=0;
			m=m+1;
		}while(m<n);
	}
	my_printf("\n");
}