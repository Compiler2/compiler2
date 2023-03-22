#define NUM_ITER 1048237

#include <header.h>




int main_bench()
{
	int w;

	my_scanf("%d",&w);

	if((13-1+w)%7==5) my_printf("1\n");
	if((44-1+w)%7==5) my_printf("2\n");
	if((72-1+w)%7==5) my_printf("3\n");
	if((103-1+w)%7==5) my_printf("4\n");
	if((133-1+w)%7==5) my_printf("5\n");
	if((164-1+w)%7==5) my_printf("6\n");
	if((194-1+w)%7==5) my_printf("7\n");
	if((225-1+w)%7==5) my_printf("8\n");
	if((256-1+w)%7==5) my_printf("9\n");
	if((286-1+w)%7==5) my_printf("10\n");
	if((317-1+w)%7==5) my_printf("11\n");
	if((347-1+w)%7==5) my_printf("12\n");

	return 0;

}