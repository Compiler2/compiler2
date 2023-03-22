#define NUM_ITER 32960

#include <header.h>







int main_bench()
{
	int t;
	my_scanf("%d", &t);
	char in[256];
	while(t--)
	{
		my_scanf("%s", in);
		char *pnt = in;
		while(*pnt)
		{
			switch(*pnt)
			{
			case 'A':
				my_printf("T");
				break;
			case 'T':
				my_printf("A");
				break;
			case 'C':
				my_printf("G");
				break;
			case 'G':
				my_printf("C");
				break;
			default:
				break;
			}
			pnt++;
		}
		my_printf("\n");
	}
	return 0;
}
