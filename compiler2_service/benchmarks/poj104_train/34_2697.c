#define NUM_ITER 249342

#include <header.h>

int fun1(int i)
{

	int j;
	j=i*3+1;
	my_printf("%d*3+1=%d\n",i,j);
	return j;
}



int fun2(int i)
{
	
	int j;
	j=i/2;
	my_printf("%d/2=%d\n",i,j);
	return j;
}


int main_bench()
{
	int i;
	my_scanf("%d",&i);
	do
	{
		if(i%2==1&&i!=1)
			i=fun1(i);
		else if(i%2==0)
			i=fun2(i);
	}
	while(i!=1);
	my_printf("End");

	return 0;
}

