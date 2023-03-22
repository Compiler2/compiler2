#include <header.h>

int main_bench()
{
	int i,m,n,sum=0;
	char a[100];
	gets(a);
	for(i=0;*(a+i)!='\0';i++)
	{	
		if(*(a+i)==' '&&*(a+i+1)!=' ')my_printf("%c",*(a+i));
		if(*(a+i)!=' ')my_printf("%c",*(a+i));
	}
}
