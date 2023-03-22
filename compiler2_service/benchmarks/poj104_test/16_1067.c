#define NUM_ITER 1294095

#include <header.h>


int main_bench() {
	char str[101];		
	my_scanf("%s", str);	
	int len = strlen(str);
	for (int i = len - 1; i >= 0; --i)
		my_printf("%c", str[i]);
	my_printf("\n");	
}