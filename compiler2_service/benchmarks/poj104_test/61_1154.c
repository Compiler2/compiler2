#include <header.h>

int main_bench()
{
	int n,a[100],s[100],i,j;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d\n",&a[i]);

		s[1]=1;
		s[2]=1;
		for(j=3;j<=a[i];j++)
		{
			s[j]=s[j-1]+s[j-2];
		}
		s[i]=s[a[i]];
		my_printf("%d\n",s[i]);
	}
	return 0;
}
