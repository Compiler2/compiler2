#include <header.h>

int main_bench()
{
	int n,a[100],b[100];
	my_scanf("%d",&n);
	int m=0;
	int i=0;
	for (i;i<n;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);
	}
	i=0;
	while(i<n)
	{
		int s=0;
		while(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90&&i<n)
		{
			s++;
			i++;
		}
		if (s>m)
		{
			m=s;
		}
		i++;
	}
	my_printf("%d",m);
}