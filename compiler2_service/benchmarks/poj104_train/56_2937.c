#define NUM_ITER 1862110

#include <header.h>

int main_bench()
{
	int i,n=0;
	char d[5],c[5];
	for(i=0;i<5;i++)
	{
		my_scanf("%c",&d[i]);
		if(d[i]>=48&&d[i]<=57) {c[i]=d[i];n++;}
		else break;
	}
	for(i=n-1;i>=0;i--)
		my_printf("%c",c[i]);
	return 0;
}