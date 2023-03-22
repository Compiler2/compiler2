#define NUM_ITER 1347593

#include <header.h>

int main_bench()
{	
    int n;
	my_scanf("%d",&n);
    void move(int n);
	move(n);
}
void move(int n)
{
	while(n!=0)
	{
	my_printf("%d",n%10);
	n=n/10;
	}
}
