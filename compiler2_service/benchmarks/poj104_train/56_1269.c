#define NUM_ITER 1474422

#include <header.h>

int main_bench()
{
	char str[80],*p,*q,t;
	my_scanf("%s", str);
	for(p=str,q=p+strlen(str)-1;p<q;p++,q--)
	{
		t=*p;
		*p=*q;
		*q=t;
	}
	my_printf("%s", str);
	return 0;
}