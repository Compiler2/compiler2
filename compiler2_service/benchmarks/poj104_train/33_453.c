#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	char str[260],*ps;
	int a=0;
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&str);
		for(ps=str;*ps!='\0';ps++)
		{
			if(*ps=='A')
			*ps='T';
			else if(*ps=='T')
			*ps='A';
			else if(*ps=='C')
			*ps='G';
			else if(*ps=='G')
			*ps='C';
	    }
	    my_printf("%s\n",str);
    }
	return 0;
}