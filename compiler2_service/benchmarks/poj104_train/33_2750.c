#define NUM_ITER 523

#include <header.h>

int main_bench()
{
	int n,i;
	char z;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("\n");
		do
		{
			my_scanf("%c",&z);
			if(z=='A')
				my_printf("T");
			else if(z=='T')
				my_printf("A");
			else if(z=='C')
				my_printf("G");
			else if(z=='G')
				my_printf("C");
		}while(z!='\n');
		my_printf("\n");
	}
	return 0;
}