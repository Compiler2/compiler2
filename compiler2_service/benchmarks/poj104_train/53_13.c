#include <header.h>

int main_bench()
{
int i,n,now,a[100],j=1,s;
my_scanf("%d",&n);
my_scanf("%d",&a[0]);
for(i=1;i<n;i++)
{
my_scanf("%d",&now);
for(s=0;s<j;s++)
	{
		if (now==a[s])  break;
		if (now!=a[s]&&(s==j-1)) {a[j]=now;j++;}
	}
}
for(i=0;i<j-1;i++)
my_printf("%d,",a[i]);
my_printf("%d",a[j-1]);
}