#define NUM_ITER 1495913

#include <header.h>

int main_bench()
{
	char c[101];
	int empty=0;
	int i;	
	gets(c);
	for (i=0;;i++)
	{
		if (c[i]==0) break;
		else if (c[i]==' '&&empty==0) {my_printf(" ");empty++;}
		else if (c[i]!=' ') {my_printf("%c",c[i]);empty=0;}
	}
    return 0;
}
