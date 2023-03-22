#include <header.h>

int main_bench()
{
	char a[256],b[256],c[256];
	my_scanf("%s",a);
	my_scanf("%s",b);
	my_scanf("%s",c);
	for (int i=0;a[i]!='\0';i++)
	{
		int j;
		for (j=0;(b[j]==a[i+j])&&(b[j]!='\0');j++);
		if (b[j]=='\0')
		{
			for (int k=0;k<i;k++) my_printf("%c",a[k]);
			my_printf("%s",c);
			for (int k=i+j;a[k]!='\0';k++) my_printf("%c",a[k]);
			return 0;
		}
	}
	my_printf("%s",a);
	return 0;
}