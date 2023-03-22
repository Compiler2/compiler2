#include <header.h>

int main_bench()
{
	int i,j,l,h;
	char s[60],w[60],b[60];
	my_scanf("%s %s",w,s);
	l=strlen(s);
	h=strlen(w);
	for(i=0;i<=l-h;i++)
	{
		for(j=0;j<h;j++)
		{
			b[j]=s[i+j];
		}
		b[h]='\0';
		if(strcmp(b,w)==0)
		{
			my_printf("%d",i);
			break;
		}
		for(j=0;j<60;j++)
		{
			b[j]=0;
		}
	}
	return 0;
}
