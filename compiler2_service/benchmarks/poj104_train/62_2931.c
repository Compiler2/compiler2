#define NUM_ITER 1531664

#include <header.h>

int main_bench()
{	
	char c[10000];
	int i,n;
	gets(c);
	for(i=0;c[i]!='\0';i++)
		if(c[i]!=' ')
			my_printf("%c",c[i]);
		else if(c[i]==' '&&c[i+1]!=' ')
			my_printf("%c",c[i]);
}