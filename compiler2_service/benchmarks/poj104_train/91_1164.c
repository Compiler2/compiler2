#include <header.h>

int main_bench()
{
	char x[150],y[150];
	int i;
	gets(x);
	for (i=0;i<=120;i++)
		y[i]=0;
	for (i=0;i<strlen(x)-1;i++)
		y[i]=x[i]+x[i+1];
	y[strlen(x)-1]=x[0]+x[strlen(x)-1];
	my_printf("%s",y);
	return(0);
}
