#define NUM_ITER 680279

#include <header.h>

int main_bench()
{
	char a[100],b[100],c[100],s[100][20]={'\0'};
	gets(a);
	gets(b);
	gets(c);
	int len,i,m=0,n=0;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]!=' ')
		{
			s[m][n]=a[i];
			n++;
		}
		else
		{
			m++;
			n=0;
		}
	}
	for(i=0;i<m+1;i++)
	{
		if(strcmp(s[i],b)==0)
		{
			strcpy(s[i],c);
		}
	}
	for(i=0;i<m;i++)
	{
		my_printf("%s ",s[i]);
	}
	my_printf("%s\n",s[m]);
}