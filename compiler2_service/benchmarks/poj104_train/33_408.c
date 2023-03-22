#define NUM_ITER 26792

#include <header.h>

int main_bench()
{
	char zfc[1000][256];
	int n,i,j;
	my_scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		gets(zfc[i]);
		j=0;
		while(zfc[i][j]!='\0')
		{
			if(zfc[i][j]=='A')
			{
				my_printf("T");
			}
			if(zfc[i][j]=='T')
			{
				my_printf("A");
			}
			if(zfc[i][j]=='C')
			{
				my_printf("G");
			}
			if(zfc[i][j]=='G')
			{
				my_printf("C");
			}
			j=j+1;
		}
		my_printf("\n");
	}
	return 0;
}