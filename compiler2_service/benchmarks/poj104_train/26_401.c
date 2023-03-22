#include <header.h>

main_bench()
{
      char a[1000];
	gets(a);
	my_printf("%c",a[0]);
	for(int i=1;;i++)
	{
		if ( (a[i]!=' ' || a[i-1]!=' ' )&&a[i]!='\0')
			my_printf("%c",a[i]);
		if(a[i]=='\0')
			break;
	}
	return 0;}
