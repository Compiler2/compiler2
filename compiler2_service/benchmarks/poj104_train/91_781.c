#define NUM_ITER 75998

#include <header.h>

int main_bench()
{
	char *s;
	s=(char*)malloc(10000*sizeof(char));
	int i,n,m;
	gets(s);
	n=strlen(s);
	for(i=0;i<n-1;i++)
	{
		m=(int)(*(s+i))+(int)(*(s+i+1));
		my_printf("%c",m);
	}
	m=(int)(*(s+n-1))+(int)(*(s+0));
	my_printf("%c",m);
}
