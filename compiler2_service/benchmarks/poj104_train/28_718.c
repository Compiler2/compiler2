#include <header.h>

int main_bench()
{
    char a[10000];
	int i,j,n,count;
	count=0;
	gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
	{	if(a[i]!=' ') count++;
		if(a[i]!=' '&&a[i+1]==' ') {my_printf("%d,",count);count=0;}
		if(a[i]!=' '&&a[i+1]=='\0') my_printf("%d",count);
	}
}
