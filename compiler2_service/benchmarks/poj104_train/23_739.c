#include <header.h>

int main_bench()
{
	char a[80][20],b;
	int i,j;
	for(i=1;;i++)
	{
		my_scanf("%s",a[i]);
		b=getchar();
		if(b!=' ') break;
	}
	my_printf("%s",a[i]);
	for(j=i-1;j>=1;j--)
		my_printf(" %s",a[j]);
}