#define NUM_ITER 911262

#include <header.h>

int main_bench()
{
	char a[80]={0},b[80]={0};
	int i;
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>=65&&a[i]<=90)
			a[i]=a[i]+32;
	}
	gets(b);
	for(i=0;b[i]!=0;i++)
	{
		if(b[i]>=65&&b[i]<=90)
			b[i]=b[i]+32;
	}
    if(strcmp(a,b)<0)
		my_printf("<");
    if(strcmp(a,b)>0)
		my_printf(">");
	if(strcmp(a,b)==0)
		my_printf("=");
}