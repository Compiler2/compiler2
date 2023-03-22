#include <header.h>

int main_bench()
{
	char a[256],b[256],c[256];
	my_scanf("%s %s %s",a,b,c);
	char *p;
	p=strstr(a,b);
	if(p)
	{   
		int n=strlen(a)-strlen(p);
		int i;
		int k=strlen(b);
	    int l=strlen(c);
        int m=0;
	    for(i=0;i<n;i++)
		{
		   my_printf("%c",a[i]);
		}
	    for(i=n;i<n+l;i++)
		{
			my_printf("%c",c[m]);
			m++;
		}
		for(i=n+k;i<(strlen(a));i++)
		{
			my_printf("%c",a[i]);
		}
	}
	else
	{my_printf("%s\n",a);}
	return 0;
}