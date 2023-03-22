#include <header.h>

int main_bench()
{
	int n,i,j,a[300],b[300]={0},p;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
my_scanf("%d",&a[i]);
for(j=0;j<i;j++)
if(a[j]==a[i]){b[i]=1;break;}
	}
for(i=n-1;i>=0;i--)
{
	if(b[i]==0)
	{
		p=i;break;
	}
}
for(i=0;i<p;i++)
{
	if(b[i]==0)my_printf("%d,",a[i]);
}
my_printf("%d",a[p]);
}