#define NUM_ITER 513

#include <header.h>

int main_bench()
{
	int n;
	char a;
	my_scanf("%d",&n);
	my_scanf("%c", &a);
	while (n--)
	{
		while (1)
		{
			my_scanf("%c", &a);
			if(a=='A')
				my_printf("T");
			if(a=='T')
				my_printf("A");
			if(a=='C')
				my_printf("G");
			if(a=='G')
				my_printf("C");
			if (a=='\n') {
				my_printf("\n");
				break;
			}
		}
		
	}
	return 0;
}