#define NUM_ITER 839224

#include <header.h>


int main_bench()
{
	char a[100]={'\0'},b[100]={'\0'};
	int i;

	gets(a);
	gets(b);

	for(i=0;i<strlen(a);i++)
		if(a[i]>='A' && a[i]<='Z') a[i]+=32;

	for(i=0;i<strlen(b);i++)
		if(b[i]>='A' && b[i]<='Z') b[i]+=32;

	if(strcmp(a,b)==0) my_printf("=");
	else if(strcmp(a,b)>=0) my_printf(">");
	else my_printf("<");
}