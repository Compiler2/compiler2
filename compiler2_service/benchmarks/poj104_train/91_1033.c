#define NUM_ITER 1291674

#include <header.h>

int main_bench()
{
	char a[200];
	int n,i,temp;
	gets(a);
	n=strlen(a);
	for(i=0;i<n-1;i++)
	{
		temp=a[i]+a[i+1];
		my_printf("%c",temp);
	}
	temp=a[n-1]+a[0];
	my_printf("%c",temp);
}