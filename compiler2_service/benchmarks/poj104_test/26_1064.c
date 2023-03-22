#include <header.h>

int main_bench()
{
	char a[101];
	int len,i,signal;
	gets(a);
	len=strlen(a);
	signal=0;
	for(i=0;i<len;i++)
	{
		if(a[i]==' ' && signal==0)
		{
			my_printf(" ");
			signal=1;
		}
		else if(a[i]!=' ')
		{
			my_printf("%c",a[i]);
			signal=0;
		}		
	}
	my_printf("\n");
	return 0;
}