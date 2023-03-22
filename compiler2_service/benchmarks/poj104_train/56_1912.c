#define NUM_ITER 1358873

#include <header.h>

int main_bench()
{
	int n,i,j;
	char c[5];
	my_scanf("%s",&c);
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		j=n-i-1;
		my_printf("%c",c[j]);
	}
	return 0;
}
	