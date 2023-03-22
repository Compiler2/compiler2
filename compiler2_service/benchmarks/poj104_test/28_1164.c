#include <header.h>

int main_bench()
{
	char s[5000];
	int n,w,i,j,m;
	gets(s);
	w=strlen(s);
	for(j=w-1;s[j]==' ';j--);
	for(m=j;s[m]!=' '&&m>0;m--);
	if(m>0)
	{
	i=0;
    n=0;
	while(i<m)
	{
		for(;s[i]==' ';i++);
		if(i<m)
		{
		   for(;s[i]!=' ';i++)
			  n++;
		     my_printf("%d,",n);
		     n=0;
		}
	}
	my_printf("%d",j-m);
	}
	else my_printf("%d",j-m+1);
}