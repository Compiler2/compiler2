#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		char line[256];
		my_scanf("%s",&line);
		for(int j=0;j<256;j++)
		{
			if(line[j]=='A')
			{
				my_printf("T");
			}
			else if(line[j]=='T')
			{
				my_printf("A");
			}
			else if(line[j]=='C')
			{
				my_printf("G");
			}
			else if(line[j]=='G')
			{
				my_printf("C");
			}
			else
			{
				my_printf("\n");
				break;
			}
		}
	}
	return 0;
}