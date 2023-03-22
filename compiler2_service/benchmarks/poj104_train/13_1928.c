#define NUM_ITER 3494

#include <header.h>

int main_bench()
{
	int n,i,j,a,b=0,m,c[91]={0};
	my_scanf("%d",&n);
	for(i=0,m=0;i<n;i++)
	{
		b=0;
		my_scanf("%d",&a);
		for(j=0;j<91;j++)
		{
			if(c[j]==a)
				b=1;
		}
		if(b==0)
		{
			c[m]=a;
			m=m+1;
		}
	}
	my_printf("%d",c[0]);
	for(i=1;i<m;i++)
		my_printf(" %d",c[i]);
	return 0;
}

