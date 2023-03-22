#include <header.h>

int main_bench()
{
	char s[50],w[50],t[50];
	int i,j,l;
	my_scanf("%s%s",s,w);
	l=strlen(s);
	for(i=0;;i++)
	{
		for(j=0;j<l;j++)
			t[j]=w[i+j];
		t[l]=0;
		if(!strcmp(s,t))
			break;
	}
	my_printf("%d\n",i);
}