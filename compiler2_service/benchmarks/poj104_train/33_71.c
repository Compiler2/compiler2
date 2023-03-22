#define NUM_ITER 23398

#include <header.h>

int main_bench()
{
	int i,j,n,len;
	char zfc[1000][256];
	my_scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		my_scanf("%s",zfc[i]);
		len=strlen(zfc[i]);
		for(j=0;j<len;j++)
		{
			if(zfc[i][j]=='A')
				my_printf("T");
			else if(zfc[i][j]=='T')
				my_printf("A");
			else if(zfc[i][j]=='G')
				my_printf("C");
			else
				my_printf("G");
		}
		my_printf("\n");

	}


	return 0;
}