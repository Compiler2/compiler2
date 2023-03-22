#include <header.h>

int main_bench()
{
	char a[80],b[80];
	int i;
	for (i=0;i<=79;i++)
	{
		a[i]=35;
		b[i]=35;
	}
	gets(a);
	gets(b);
	for (i=0;i<=79;i++)
	{
		if(a[i]>64&&a[i]<91) a[i]=a[i]+32;
	}
	for (i=0;i<=79;i++)
	{
		if(b[i]>64&&b[i]<91) b[i]=b[i]+32;
	}
	if(strcmp(a,b)>0) my_printf(">\n");
	else
	{
		if(strcmp(a,b)<0) my_printf("<\n");
		else my_printf("=\n");
	}
}

