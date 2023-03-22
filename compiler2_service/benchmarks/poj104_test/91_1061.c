#define NUM_ITER 1158430

#include <header.h>



int main_bench()
{
	int i,l;
	char c[101];
	gets(c);
	l=strlen(c);
	for(i=0;i<=l-1;i++){
		my_printf("%c",c[i]+c[(i+1)%l]);
	}
	return 0;
}

