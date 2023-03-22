#define NUM_ITER 1495112

#include <header.h>

int main_bench()
{
	char a[100];
	int i,s;
	gets(a);
	for (i=0;i<=99;i++)
	{
		if (a[i]=='\0') break;
		if (a[i]=='.') {my_printf(".");break;}
		if (a[i]!=' ') my_printf("%c",a[i]);
		else if (a[i-1]!=' ') my_printf(" ");
	}
	return 0;
}
