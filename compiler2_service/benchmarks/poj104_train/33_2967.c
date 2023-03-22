#define NUM_ITER 21975

#include <header.h>

int main_bench()
{
	char str[256];
	char ch;
	int a,n,i=0,j=0;
	my_scanf("%d%c",&n,&ch);
	while(i++<n)
	{
		gets(str);
		a=strlen(str);
		if(str[0]=='A')
			{
				my_printf("T");
			}else if(str[0]=='C')
			{
				my_printf("G");
			}else if(str[0]=='G')
			{
				my_printf("C");
			}else if(str[0]=='T')
			{
				my_printf("A");
			}
		while(j++<a)
		{
			if(str[j]=='A')
			{
				my_printf("T");
			}else if(str[j]=='C')
			{
				my_printf("G");
			}else if(str[j]=='G')
			{
				my_printf("C");
			}else if(str[j]=='T')
			{
				my_printf("A");
			}
		}
		my_printf("\n");
		j=0;
	}
}