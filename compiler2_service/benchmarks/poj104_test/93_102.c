#define NUM_ITER 1598779

#include <header.h>


int main_bench()
{
	int a,f[3]={0,0,0};
	my_scanf("%d",&a);

	if(a%3==0)
	{
		my_printf("3");
		f[0]=1;
		f[1]=1;
	}
	if(a%5==0)
	{
		if(f[1]==1)
			my_printf(" ");
		my_printf("5");
		f[0]=1;
		f[2]=1;
	}
	if(a%7==0)
	{
		if(f[1]==1||f[2]==1)
			my_printf(" ");
		my_printf("7");
		f[0]=1;
	}
	if(f[0]==0)
		my_printf("n");

	return 0;
}