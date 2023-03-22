#include <header.h>

main_bench()
{
	char *a;
	a=(char *)malloc(100*sizeof(char));
	gets(a);
	int i,m;
	m=strlen(a);
	for(i=0;i<m-1;i++)
		my_printf("%c",*(a+i)+*(a+i+1));
	my_printf("%c",*a+*(a+m-1));
}