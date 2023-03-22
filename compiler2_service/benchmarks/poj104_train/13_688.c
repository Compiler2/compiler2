#include <header.h>

int main_bench()
{
	int a[20000],i,j,m,k,n;
	my_scanf("%d",&k);
	for(i=0;i<k;i++)
		my_scanf("%d",&a[i]);
	my_printf("%d",a[0]);
	for(i=1;i<k;i++)
	{
		for(j=0,m=1;j<=i-1;j++)
		{
			if(a[i]==a[j])
			n=0;
			else
				n=1;
			m=m*n;
		}
		if(m==1)
			my_printf(" %d",a[i]);
			

	}
	return 0;
}
	