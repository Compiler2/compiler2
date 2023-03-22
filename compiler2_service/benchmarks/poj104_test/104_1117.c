#define NUM_ITER 1648008

#include <header.h>

int main_bench()
{
	void Hanshu(int a,int b);
	int a,b,k;
	my_scanf("%d %d",&a,&b);
	Hanshu(a,b);
	return 0;
}

void Hanshu(int a,int b)
{
	if(a==b) my_printf("%d",a);
	else if(a>b)
	{
		a=a/2;Hanshu(a,b);
	}
	else
	{
		b=b/2;Hanshu(a,b);
	}
}