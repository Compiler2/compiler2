#define NUM_ITER 1275293

#include <header.h>

int main_bench(){
	char zfc[100], exc;
	int len, i;
	my_scanf("%s", zfc);
        len = strlen(zfc);
for(i = 0; i < len/2; i++){
	exc = zfc[i];
	zfc[i] = zfc[len-1-i];
	zfc[len-1-i] = exc;
}

my_printf("%s", zfc);

	return 0;
}
