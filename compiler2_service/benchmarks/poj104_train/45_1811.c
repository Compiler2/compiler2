#include <header.h>

int main_bench()
{
	char shuru[2][50];
	int i;
	for(i=0;i<2;i++)
	{
		my_scanf("%s",shuru[i]);
	}
	int len=strlen(shuru[1]);
	int j;
	for(j=0;j<len;j++)
	{
		if(shuru[0][0]==shuru[1][j])
		{
			my_printf("%d",j);
			break;
		}
	}
	return 0;
}

