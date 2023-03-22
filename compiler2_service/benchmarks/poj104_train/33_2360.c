#include <header.h>



int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	getchar();
	char base[256],*p;
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&base);
		p=base;
		for(;p<=&base[strlen(base)-1];p++)
		{
			if(*p=='A')
			{
				my_printf("T");
			}else if(*p=='T')
			{
				my_printf("A");
			}else if(*p=='C')
			{
				my_printf("G");
			}else
			{
				my_printf("C");
			}	
		}
		my_printf("\n");
	}
	return 0;
}