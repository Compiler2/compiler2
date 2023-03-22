#include <header.h>


int main_bench()
{
	char a[5000]={0};
	char *p=a;
	int i=0,flag=0;
	gets(a);
	while(*p!=0)
	{
		i=0;
		while(*p!=32 && *p!=0) 
		{
			i++;
			p++;
		}
		if (i==0);
		else
		{
			if (flag==0) flag=1;
			else my_printf(",");
			my_printf("%d",i);
		}
		p++;
	}
}