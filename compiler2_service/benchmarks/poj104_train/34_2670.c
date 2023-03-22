#include <header.h>

void oushu(int a)
{
	void qishu(int a);
	my_printf("%d/2=%d\n",a,a/2);
	if(a/2==1)
	{
		my_printf("End");
		my_printf("\n");
	}
	else
	{
	if((a/2)%2==0)
		oushu(a/2);
	else if((a/2)%2!=0)
		qishu(a/2);
	}
}
void qishu(int a)
{
	void oushu(int a);
	my_printf("%d*3+1=%d\n",a,a*3+1);
	if((a*3+1)==1)
	{
		my_printf("End");
		my_printf("\n");
	}
	else
	{
		if((a*3+1)%2==0)
			oushu((a*3+1));
		else qishu((a*3+1));
	}
}
int main_bench()
{
	void oushu(int a);
	void qishu(int a);
	int n;
	my_scanf("%d",&n);
	if(n==1)
	{
		my_printf("End");
		my_printf("\n");
	}
	else
	{

	if(n%2==0)
		oushu(n);
	else qishu(n);
	}
}