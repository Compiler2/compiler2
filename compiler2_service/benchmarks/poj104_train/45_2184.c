#define NUM_ITER 917164

#include <header.h>

int main_bench()
{
	char a[50], b[50];
	int i, j, p;
	my_scanf("%s%s", a, b);
	for(i=0; i<=strlen(b)-strlen(a); i++)
	{
		p=1;
		for(j=0; j<strlen(a); j++)
			if(b[i+j]!=a[j])
				p=0;
		if(p) break;
	}
	my_printf("%d\n", i);
}