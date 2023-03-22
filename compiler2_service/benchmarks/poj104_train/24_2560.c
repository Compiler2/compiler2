#include <header.h>

int main_bench()
{
	int n;
	char c[300][100]={0};
	int a[300]={0};
	int i,j,max=0,min=100;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",c[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]=strlen(c[i]);
	}
	for(i=0;i<n;i++)
	{
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==max) 
		{
			my_printf("%s\n",c[i]);
			break;
		}
	}
    for(i=0;i<n;i++)
	{
		if(a[i]==min) 
		{
			my_printf("%s\n",c[i]);
			break;
		}
	}
	return 0;
}
