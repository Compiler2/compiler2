#define NUM_ITER 1335324

#include <header.h>

int main_bench()
{
	char a[100];
	int l,i;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!=' '||(a[i]==' '&&a[i+1]!=' '))
			my_printf("%c",a[i]);
		if(a[i]==' '&&a[i+1]==' ')
			continue;
	}
	my_printf("\n");
}