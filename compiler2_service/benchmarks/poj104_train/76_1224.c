#include <header.h>



int a[50000],b[50000];
int main_bench()
{
	int n,i,k=1,a0,b0,result=1;
	my_scanf("%d",&n);
	for(i=0;i<n;i++) my_scanf("%d %d",&a[i],&b[i]);
	a0=a[0];
	b0=b[0];
	for(;k<n-1;)
	{
		for(i=1;i<n;i++)
		{
			k=i;
			if(a[i]<=a0&&b[i]>=b0)
			{
				if(!(a[i]==a0&&b[i]==b0))
				{
					a0=a[i];
					b0=b[i];
					break;
				}
			}
			if(a[i]<a0&&b[i]>=a0&&b[i]<=b0)
			{
				a0=a[i];
				break;
			}
			if(a[i]>=a0&&a[i]<=b0&&b[i]>b0)
			{
				b0=b[i];
				break;
			}
		}
	}
	for(i=0;i<n;i++) if(a[i]<a0||b[i]>b0) result=0;
	if(result==1) my_printf("%d %d",a0,b0);
	else my_printf("no");
	return 0;
}