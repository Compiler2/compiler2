#include <header.h>

int main_bench()
{
	char a[80][20],*p[80],**q,t;
	int i;
	for(i=0;i<80;i++)
		p[i]=a[i];
	for(q=p;;q++)
	{
		my_scanf("%s",*q);	
		t=getchar();
		if(t!=' ') break;
	}
	for(;q>p;q--)
		my_printf("%s ",*q);
	my_printf("%s",*q);
}