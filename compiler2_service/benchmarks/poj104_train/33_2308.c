#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d\n",&n);
	int i;
	for(i=0;i<n;i++)
	{
		char m;
		do
		{
			my_scanf("%c",&m);
			if (m=='A')
			{
				my_printf("T");
			}
			else if(m=='T')
			{
				my_printf("A");
			}
			else if(m=='G')
			{
				my_printf("C");
			}
			else if(m=='C')
			{
				my_printf("G");
			}
		}while(m!='\n');
		my_printf("\n");
	}
	return 0;
}
