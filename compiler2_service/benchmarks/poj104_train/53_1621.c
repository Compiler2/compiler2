#include <header.h>

int main_bench()
{
	int n,a[300],b[300],i,j,r,k=1;
	my_scanf("%d",&n);
	my_scanf("%d",&a[0]);
	b[0]=a[0];
    for(i=1;i<n;i++)
	{
		r=0;
		my_scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				r++;
		}
		if(r==0)
		{
			b[k]=a[i];
			k++;
		}
	}
	my_printf("%d",b[0]);
	for(i=1;i<k;i++)
		my_printf(",%d",b[i]);
	return 0;
}