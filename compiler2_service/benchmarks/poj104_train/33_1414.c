#define NUM_ITER 215

#include <header.h>

int main_bench()
{
	int n, i, j;
	my_scanf("%d", &n);
	char input, output;
	my_scanf("%c", &input);
	for (i=1;i<=n;i++)
	{
		for(j=0;j<255;j++)	
		{
			my_scanf("%c", &input);
			if(input=='A')
			{
				my_printf("T");
			}
			else if(input=='T')
			{
				my_printf("A");
			}
			else if(input=='G')
			{
				my_printf("C");
			}
			else if(input=='C')
			{
				my_printf("G");
			} else {
				my_printf("\n");
			}
		}
	}
}



