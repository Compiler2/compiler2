#define NUM_ITER 1288879

#include <header.h>

int main_bench()
{
	int i,j,n;
	char c[100]={'\0'};
	gets(c);
    n=strlen(c);
    for (i=0;i<n-1;i++)
	{
		my_printf("%c",c[i]+c[i+1]);
	}
	my_printf("%c",c[0]+c[n-1]);
	return 0;
}