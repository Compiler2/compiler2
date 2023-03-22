#define NUM_ITER 1660351

#include <header.h>

int main_bench()
{
	char *p1,*m;
	int n,i;
	char s[1000];
	while(gets(s))
{
	n=strlen(s);
	m=&s[0];
    for(p1=s;p1<(s+n-4);p1++)
	{
		if(*p1>*m) m=p1;
	}
	for(p1=s;p1<(s+n-4);p1++)
	{
		if(p1<m) my_printf("%c",*p1);
		if(p1==m) my_printf("%c%c%c%c",*p1,s[n-3],s[n-2],s[n-1]);
		if(p1>m) my_printf("%c",*p1);
	}
my_printf("\n");
}
return 0;	
}