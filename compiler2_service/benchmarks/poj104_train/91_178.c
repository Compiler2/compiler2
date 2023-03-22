#include <header.h>

int main_bench()
{
	int i;
	char *a;
	a=(char*)calloc(10000,sizeof(char));
	gets(a);
	for(i=0;*(a+i)!='\0';i++)
	{
		if(*(a+i+1)=='\0')
			my_printf("%c",*(a+i)+*(a+0));
		else
			my_printf("%c",*(a+i)+*(a+i+1));
	}
}
