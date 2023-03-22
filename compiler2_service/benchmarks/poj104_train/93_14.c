#define NUM_ITER 1812820

#include <header.h>

int main_bench()
{
	int a,three,five,seven,sum;
	my_scanf("%d",&a);
	three=(a%3==0);
	five=(a%5==0);
	seven=(a%7==0);
	sum=three+five+seven;
	if (sum==3)
		my_printf("3 5 7");
	if (sum==2)
		if (three==1)
		{
			my_printf("3");
			if (five==1)
				my_printf(" 5");
			else my_printf(" 7");
		}
		else my_printf("5 7");
	if (sum==1)
		if (three==1)
			my_printf("3");
		else if (five==1)
			my_printf("5");
		else my_printf("7");
	if (sum==0)
		my_printf("n");
}