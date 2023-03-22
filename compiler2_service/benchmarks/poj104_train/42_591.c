#include <header.h>

int main_bench()
{
	int a[100000],i,n,k,*p,j;
	my_scanf("%d",&n);
	for(p=a;p<(a+n);p++)
	{
		my_scanf("%d",p);
	}
	my_scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			for(p=a,j=i;j<n-1;j++)
			{
				*(p+j)=*(p+j+1);
			}
			i=i-1;
			n--;
		}
	}
	for(p=a;p<(a+n-1);p++)
	{
		my_printf("%d ",*p);
	}
	my_printf("%d",a[n-1]);
	return 0;
}