#define NUM_ITER 302259

#include <header.h>

int main_bench()
{
	int i,count=0;
	char a[20000];
	while( ( a[count] = getchar() ) != '\n' )
	{
		count++;
	}
	for( i = count-1; i >= 0; i-- )
		my_printf("%c",a[i]);
	my_printf("\n");
}
