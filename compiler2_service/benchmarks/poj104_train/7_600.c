#include <header.h>



int main_bench()
{
	int n,i,j,k,m=0;
	char a[256],b[256],c[256];

	gets(a);
	gets(b);
	gets(c);

	n=strlen(a);
	k=strlen(b);

	i=strstr(a,b)-a;

	if(i>=0&&i<=n-k)
	{
		for(j=0;j<i;j++)
		{
			my_printf("%c",a[j]);
		}
		for(j=0;j<k;j++)
		{
			my_printf("%c",c[j]);
		}
		for(j=i+k;j<n;j++)
		{
			my_printf("%c",a[j]);
		}
	}
	else
	{
		for(i=0;i<n;i++)
		{
			my_printf("%c",a[i]);
		}
	}
	my_printf("\n");
	return 0;
}
