#include <header.h>

int main_bench()
{
	char c[100],s[100],d[100],e[30][30];
	int m=0,n=0,l,i;
	gets(c);
	l=strlen(c);
	gets(s);
	gets(d);
	for(i=0;i<(l+1);i++)
	{
		e[m][n]=c[i];
		n++;
		if(c[i]==' ')
		{
			e[m][n-1]=0;
			m++;
			n=0;
		}
	}
	for(i=0;i<=m;i++)
		if (strcmp(s,e[i])==0) strcpy(e[i],d);
	my_printf("%s",e[0]);
	for(i=1;i<=m;i++)
		my_printf(" %s",e[i]);


}