#include <header.h>

int main_bench()
{
	int a[300],b[300],n,k=0,i,j,x;
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		x=0;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				x=x+1;
		}
		if(x==0)
		{
			b[k]=a[i];
			k=k+1;
		}
	}
	my_printf("%d",b[0]);
	for(i=1;i<k;i++)
	{
		my_printf(",%d",b[i]);
	}
	return 0;
}
