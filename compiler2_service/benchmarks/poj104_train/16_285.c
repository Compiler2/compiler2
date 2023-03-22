#define NUM_ITER 1393532

#include <header.h>

int main_bench()
{
	char c[5];
	int i, t, k, l;   
	my_scanf("%s", c);
	k=strlen(c);
	l=k/2;
	for(i=0;i<l;i++)
	{t=c[i];c[i]=c[k-i-1];c[k-i-1]=t;}
	my_printf("%s",c);
	return 0;
	}