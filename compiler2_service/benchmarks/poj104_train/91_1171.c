#define NUM_ITER 1316922

#include <header.h>

int main_bench()
{
	int b[1000];
	char a[1000];
	int n,i;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
		b[i]=a[i];
	for(i=0;i<n-1;i++)
		my_printf("%c",b[i]+b[i+1]);
	my_printf("%c",b[n-1]+b[0]);
	

	return 0;
}