#define NUM_ITER 26688

#include <header.h>

int main_bench()
{
	int n,i;
	char zfc[10000][256],*ps;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",zfc[i]);
	}
	for(i=0;i<n;i++)
	{
		for(ps=zfc[i];*ps!='\0';ps++)
		{
			if(*ps==65)
			{
				my_printf("T");
				
			}
			else if(*ps==84)
			{
				my_printf("A");
			}
			else if(*ps==71)
			{
				my_printf("C");
			}
			else if(*ps==67)
			{
				my_printf("G");
			}
		}
		my_printf("\n");
	}
	return 0;
}