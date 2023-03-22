#include <header.h>

int main_bench()
{
	void odd(int);
	void even(int);
	int n;
	my_scanf("%d",&n);
	if(n%2==0)
		even(n);
	else if(n!=1)
		odd(n);
	else
		my_printf("End");
	return 0;
}
void odd(int n)
{
	void even(int);
	int m;
	m=n*3+1;
	my_printf("%d*3+1=%d\n",n,m);
	if(m%2==0)
		even(m);
	else if(m!=1)
		odd(m);
	else my_printf("End");
}
void even(int n)
{
	int m;
	m=n/2;
	my_printf("%d/2=%d\n",n,m);
	if(m%2==0)
		even(m);
	else if(m!=1)
		odd(m);
	else
		my_printf("End");
}