#include <header.h>

int main_bench()
{
	int n,i=0;
	char a[10000],*p;
	gets(a);
	n=strlen(a);
	for(p=a;p<a+n;p++)
	{
		if(*p==' ')
		{
			if(i!=0)my_printf("%d,",i);
			i=0;
		}
		else i++;
		if(p==a+n-1)break;
	}
	my_printf("%d",i);
}