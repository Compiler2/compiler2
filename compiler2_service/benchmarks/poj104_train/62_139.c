#include <header.h>

main_bench()
{
	char a[10000];
	gets(a);
	int s=strlen(a);
	for(int i=0;i<s-1;i++)
	{
		if(a[i]!=' ')
		{
			my_printf("%c",a[i]);
			if(a[i+1]==' ')
			{
				my_printf(" ");
			}
		}
	}
	my_printf("%c",a[s-1]);
}