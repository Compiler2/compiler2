#define NUM_ITER 1286369

#include <header.h>

int main_bench()
{
	char a[100],b[100],*p,*q;
	int sum=0,n;
	gets(a);
	n=strlen(a);
	for(p=a,q=b;p<a+n-1;p++,q++)
	{
		*q=*p+*(p+1);
		sum++;
	}
	*q=*p+*a;
	sum++;
	for(q=b;q<b+sum;q++)
	{
		my_printf("%c",*q);
	}
   return 0;
}

	