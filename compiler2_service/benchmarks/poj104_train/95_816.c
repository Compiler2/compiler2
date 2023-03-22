#define NUM_ITER 159962

#include <header.h>

int main_bench()
{
	char strupr(char x);
	int i;
	char a[80],b[80],c[80],d[80];
	gets(a);
	gets(b);
	for(i=0;i<80;i++)
	{c[i]=strupr(a[i]);
	 d[i]=strupr(b[i]);}
	if(strcmp(c,d)>0) my_printf(">");
	else if(strcmp(c,d)<0) my_printf("<");
	else my_printf("=");
}
char strupr(char x)
{
	if(x>96&&x<123)
		return (x-32);
	else return (x);
}