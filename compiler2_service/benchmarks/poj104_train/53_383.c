#include <header.h>

int main_bench()
{
	int n,i,j,p=0,k=0;
	int a[350],num[350],index[350]={0};
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (a[j]==a[i])
				p++;
		}
		if (p>=1&&index[a[i]]==0)
		{
			num[k]=a[i];
			k++;
			index[a[i]]=1;
		}
		p=0;
	}
	for (i=0;i<k-1;i++)
	{
		my_printf("%d,",num[i]);
	}
	my_printf("%d",num[k-1]);
}

