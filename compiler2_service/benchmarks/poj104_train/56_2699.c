#define NUM_ITER 983961

#include <header.h>

int main_bench()
{
	void a(int b,int n);
	int c,d;
	my_scanf("%d",&c);
	a(c,5);
}


void a(int b,int n)
{
	if (n==1)
	{if(b%10!=0) my_printf("%d",b%10);
	}
	else {if(b%10!=0) {my_printf("%d",b%10);}b=b/10;a(b,n-1);}
}
