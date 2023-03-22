#define NUM_ITER 6124

#include <header.h>

int main_bench()
{
	int n,a[300],i,j,c=0,z=0,b[302];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)my_scanf("%d",&a[i]);
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])c=c+1;
		}
		if(c==0)b[z]=a[i],z++;
		c=0;
	}
	b[z]=a[0];
	for(i=z;i>0;i--)my_printf("%d,",b[i]);
	my_printf("%d",b[0]);
}
