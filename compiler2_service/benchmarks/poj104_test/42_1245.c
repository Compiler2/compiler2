#include <header.h>

int a[1000001];
int main_bench()
{
	int n,k,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	my_scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]!=k)
		{
			my_printf("%d",a[i]);
			break;
		}
	}
    for(j=i+1;j<n;j++)
	{
		while((a[j]!=k)&&(j<n))
		{
			my_printf(" %d",a[j]);
			j++;
		}
		if(a[j]==k)
		{
			continue;
		}
	}
	return 0;
}






