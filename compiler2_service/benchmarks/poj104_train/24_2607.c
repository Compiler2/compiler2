#include <header.h>

int main_bench()
{
	int n,i,j,k,num[1000];
	char a[1000][100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",a[i]);
		num[i]=strlen(a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(num[j]>num[j-1])
			{
				k=num[j];
				num[j]=num[j-1];
				num[j-1]=k;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(strlen(a[i])==num[0])
		{
			my_printf("%s\n",a[i]);
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(strlen(a[i])==num[n-1])
		{
			my_printf("%s\n",a[i]);
			break;
		}
	}
	return 0;
}