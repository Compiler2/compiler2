#define NUM_ITER 1254192

#include <header.h>

int main_bench()
{
	char x[100];
	int a[100],i,n;
	char str[100];
	gets(str);
	n=strlen(str);
	for(i=1;i<n;i++)
	{
		a[i]=str[i-1]+str[i];
	}
	a[n]=str[0]+str[n-1];
	for(i=1;i<=n;i++)
	{
		my_printf("%c",a[i]);
	}
	return 0;
}