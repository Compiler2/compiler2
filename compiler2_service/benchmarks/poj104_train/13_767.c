#define NUM_ITER 5010

#include <header.h>

int main_bench()
{
	int n,i,j,k=0,m;
	int a[20000],b[20000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
		for(j=0;j<n;j++)
			if(a[i]==a[j])
			{
				if(i!=j&&a[j]!=0) a[j]=0;
			}
		}
	}
	for(i=0;i<n;i++)
		if(a[i]!=0)
		{
			b[k]=a[i];
			k++;
		}
	m=k;
	for(k=0;k<m-1;k++)
	my_printf("%d ",b[k]);
	my_printf("%d",b[k]);
}