#include <header.h>

int main_bench()
{
	char a[50],b[50];
	int q,w,i;
	my_scanf("%s",a);
	my_scanf(" ");
    my_scanf("%s",b);
	q=strlen(a);
	w=strlen(b);
	for (i=0;i<w;i++)
	{
	    if (b[i]==a[0])  break;
	}
	my_printf("%d",i);
	return 0;
}
