#define NUM_ITER 1155959

#include <header.h>

int main_bench()
{
	char a[100];
	int n,i;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
		my_printf("%c",a[i]+a[(i+1)%n]);
}