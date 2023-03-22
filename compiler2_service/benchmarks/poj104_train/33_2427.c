#include <header.h>

int main_bench()
{
	int n;
	int i;
	char c;
	my_scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		while(1)
		{
			my_scanf("%c",&c);
			if(c=='\n')
			{
			break;
			}
			else if(c=='A')
			{
				my_printf("T");
			}
			else if(c=='T')
			{
				my_printf("A");
			}
			else if(c=='G')
			{
				my_printf("C");
			}
			else if(c=='C')
			{
				my_printf("G");
			}
		}
        my_printf("\n");
		
	}
	
	return 0;
}