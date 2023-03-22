#include <header.h>

int main_bench()
{
	int a[300],k=0,i,max=-999,max1=-999;
	char c;
	my_scanf("%d",&a[k]);
	my_scanf("%c",&c);
	while(c!='\n')
	{
		k++;
		my_scanf("%d",&a[k]);
		my_scanf("%c",&c);
	}
	for(i=0;i<=k;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	for(i=0;i<=k;i++)
	{
		if(a[i]>max1&&a[i]<max)
		{
			max1=a[i];
		}
	}
		if(max1==-999)
			my_printf("No");
		else
			my_printf("%d",max1);
		return 0;
}
