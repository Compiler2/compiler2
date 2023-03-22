#define NUM_ITER 413433

#include <header.h>

int main_bench()
{
	int n,i;
	char s[100],t[100],*ps,*pt;
	char da[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char xiao[27]="abcdefghijklmnopqrstuvwxyz";
	gets(s);
	gets(t);
	for(ps=s,pt=t;*ps!='\0',*pt!='\0';ps++,pt++)
	{
		for(i=0;i<27;i++)
		{
			if(*ps==da[i])
				*ps=xiao[i];
			if(*pt==da[i])
				*pt=xiao[i];
		}
	}
    n=strcmp(s,t);
	if(n>0)
		my_printf(">\n");
	if(n<0)
		my_printf("<\n");
	else
		my_printf("=\n");
	return 0;
}