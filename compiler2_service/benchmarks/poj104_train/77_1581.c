#define NUM_ITER 2166774

#include <header.h>

 



char boy;

int queue(int num)
{
	char input;
	input=getchar();
	if(input==boy)
	{
		int girl;
		girl=queue(num+1);
		my_printf("%d %d\n",num,girl);
		return queue(girl+1);
	}
	else return num;
}

int main_bench()
{
	boy=getchar();
	my_printf("0 %d\n",queue(1)); 
	return 0;
}