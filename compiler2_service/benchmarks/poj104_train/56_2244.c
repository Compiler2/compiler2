#define NUM_ITER 1188164

#include <header.h>

int main_bench()
{
	char a[10];

	int i,j,k,n;
	gets(a);
	n=strlen(a);
	for(i=0;i<=(n-1)/2;i++)
	{
	k=a[i];
	a[i]=a[n-1-i];
	a[n-1-i]=k;
	}
	for(i=0;i<n;i++)
	my_printf("%d",a[i]-'0');
}