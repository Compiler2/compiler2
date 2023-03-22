#define NUM_ITER 1203038

#include <header.h>


int main_bench()
{
	char a[101] = {'\0'};
	char b[101] = {'\0'};
	char * pa = a;
	char * pb = b;
	int i;

	gets(a);
	for (i = 0; i < strlen(a)-1; i++) {
		* pb = * pa + * (pa + 1);
		pb++;
		pa++;
	}
	* pb = * pa + * a;
	my_printf("%s",b);
	return 0;
}