#define NUM_ITER 846316

#include <header.h>

int  main_bench()
{
	char a[81]={0};
	char b[81]={0};
	gets(a);
	gets(b);
	int len1=strlen(a);
	int len2=strlen(b);
	for(int i=0;i<len1;i++)
		a[i]=toupper(a[i]);
	for(int i=0;i<len2;i++)
		b[i]=toupper(b[i]);
	if(strcmp(a,b)>0)
	   my_printf("%c",'>');
	else
	   if(strcmp(a,b)<0)
	      my_printf("%c",'<');
	   else
	      my_printf("%c",'=');
}