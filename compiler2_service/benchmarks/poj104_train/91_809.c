#include <header.h>

int main_bench()
{
	char org[200];
	char *p;
	p=org;
	int i,m,n;
	gets(org);
	n=strlen(org);
	for(i=0;i<n-1;i++)
	{
		
		m=*(p+i)+*(p+1+i);
		my_printf("%c",m);
	}
	m=*(p+i)+*p;
	my_printf("%c",m);
}
	

