#include <header.h>

int main_bench()
{
	char a[6],b[6];
	int d,i;
	my_scanf("%s",a);
	d=strlen(a);
	for(i=0;i<d;i++)
	{
		a[i];
		b[d-i-1]=a[i];
	}
	b[d]='\0';
		my_printf("%s",b);
	return 0;
}