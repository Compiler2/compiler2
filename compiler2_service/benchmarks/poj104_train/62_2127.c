#define NUM_ITER 1305004

#include <header.h>


int main_bench() {

	char ch[1000];
	
	gets(ch);
	int len = strlen(ch);

	int i;
	for(i = 0; i < len; i++) {
		if(ch[i] != ' ') {
			my_printf("%c" , ch[i]);
		} else {
			if(ch[i-1] == ' ') {

			} else {
				my_printf(" ");
			}
		}
	}

	my_printf("\n");


	return 0;
}