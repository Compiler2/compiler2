#define NUM_ITER 824451

#include <header.h>

char z(char a)
{
	char y;
	if(a>=65&&a<=90)y=a+32;
	else y=a;
	return (y);
}
int main_bench()
{
    char z(char a);
	char a[100],b[100],c[100],d[100];
	int x,y,i;
	gets(a);
	gets(b);
	x=strlen(a);y=strlen(b);
	for(i=0;i<=x;i++)c[i]=z(a[i]);
	for(i=0;i<=y;i++)d[i]=z(b[i]);
	  
	if(strcmp(c,d)<0)my_printf("<");
	else if(strcmp(c,d)==0)my_printf("=");
	 else my_printf(">");
   return 0;
}