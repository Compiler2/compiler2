#define NUM_ITER 337590

#include <header.h>

int n;
int main_bench()
{
	int s(int s),b(int b);
	my_scanf("%d",&n);
	for(;n!=1;)
	{
		if (n%2==0) s(n);
		else b(n);
	}
	my_printf("End");
}
int s(int s)
{
	n=n/2;
	my_printf("%d/2=%d\n",2*n,n);
    return n;
}
int b(int b)
{
	n=n*3+1;
	my_printf("%d*3+1=%d\n",(n-1)/3,n);
	return n;
}