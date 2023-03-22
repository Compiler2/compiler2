#define NUM_ITER 1475951

#include <header.h>

int main_bench()
{
	char str[1000];
	int n,i,p=0;
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
		for(;str[i]==' ';i++);
		n=0;
		for(;str[i]!=' '&&str[i]!='\0';i++)
		{
			n++;
		}
		p++;
		if(p!=1)
			my_printf(",");
		my_printf("%d",n);

	}
	my_printf("\n");
}

