#include <header.h>

int main_bench()
{
	char s[100],a[100],d[100],b[100][50];
	int i,j=0,k=0,n,m,l;
	gets(s);
	my_scanf("%s",a);
	my_scanf("%s",d);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]!=' ')
		{
			b[j][k]=s[i];
			k++;
		}
		else
		{
			b[j][k]='\0';
			j++;
			k=0;
		}
	}
	b[j][k]='\0';
	for(m=0;m<j+1;m++)
	{
		l=strcmp(a,b[m]);
		if(l==0) strcpy(b[m],d);
		if(m==0) my_printf("%s",b[m]);
		else my_printf(" %s",b[m]);
	}
	return 0;
}