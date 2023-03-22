#define NUM_ITER 449841

#include <header.h>

int main_bench()
{
	char s[100];
	char a[100];
	char b[100];
	char c[100][100]={'\0'};
	int i,k=0,j=0;
	gets(s);
	gets(a);
	gets(b);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ')
		{
			c[k][j]=s[i];
			j++;
		}
		if(s[i]==' ')
		{
			k++;
			j=0;
		}
	}
	for(i=0;i<=k;i++)
	{
		if(strcmp(c[i],a)==0)
		{
			strcpy(c[i],b);
		}
	}
	for(i=0;i<=k;i++)
	{
		if(i==0)
			my_printf("%s",c[i]);
		else 
			my_printf(" %s",c[i]);
	}
	return 0;
}






