#include <header.h>

int main_bench()
{
	int i,l,n;
	char s[60][60];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s[i]);
		l=strlen(s[i]);
	      s[i][l-1]='\0';
	      s[i][l-2]='\0';
	   if(s[i][l-3]=='i')
	   s[i][l-3]='\0';
	   my_printf("%s\n",s[i]);
	}
}
	   