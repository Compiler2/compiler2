#define NUM_ITER 1349194

#include <header.h>


int main_bench() {
	char str[201];
	gets(str);
	int i, l = strlen(str);
	for (i = 0; i < l; i++) {
		if (!(i > 0 && *(str+i) == ' ' && *(str+i-1) == ' ')) {
			my_printf("%c", *(str+i));
		}
	}
	return 0;
}