#define NUM_ITER 27548

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	char zfc[1000];
gets(zfc);
	for(int j=0;j<n;j++)
	{
	   gets(zfc);
    	for(int i=0;;i++)
	{
		if(zfc[i]=='A')
		{
			my_printf("T");
			continue;
		}
        if(zfc[i]=='T')
		{
			my_printf("A");
			continue;
		}
		if(zfc[i]=='C')
		{
			my_printf("G");
			continue;
		}
		if(zfc[i]=='G')
		{
			my_printf("C");
			continue;
		}
		
        if(zfc[i]=='\0')
		{
			my_printf("\n");
        	break;
		}
	}
	}
	return 0;
}
	
	
