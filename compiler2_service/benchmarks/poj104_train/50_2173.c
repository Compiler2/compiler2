#define NUM_ITER 967203

#include <header.h>


int main_bench()
{
	int w;
	my_scanf("%d",&w);
	int day=1;
	
	w=(w+12)%7;
	if(w==0)
		w=7;
	if(w==5)
		my_printf("1\n");

	w=(w+31)%7;
	if(w==0)
		w=7;
	if(w==5)
		my_printf("2\n");

	w=(w+28)%7;
	if(w==0)
		w=7;
	if(w==5)
		my_printf("3\n");
	
	w=(w+31)%7;
	if(w==0)
		w=7;
	if(w==5)
		my_printf("4\n");

	w=(w+30)%7;
	if(w==0)
		w=7;
	if(w==5)
		my_printf("5\n");

	w=(w+31)%7;
	if(w==0)
		w=7;
	if(w==5)
		my_printf("6\n");

	w=(w+30)%7;
	if(w==0)
		w=7;
	if(w==5)
		my_printf("7\n");

	w=(w+31)%7;
	if(w==0)
		w=7;
	if(w==5)
		my_printf("8\n");

	w=(w+31)%7;
	if(w==0)
		w=7;
	if(w==5)
		my_printf("9\n");

	w=(w+30)%7;
	if(w==0)
		w=7;
	if(w==5)
		my_printf("10\n");

	w=(w+31)%7;
	if(w==0)
		w=7;
	if(w==5)
		my_printf("11\n");

	w=(w+30)%7;
	if(w==0)
		w=7;
	if(w==5)
		my_printf("12\n");
}
