#define NUM_ITER 25544

#include <header.h>

int main_bench()
{
	int n,i,l;
	char s[33];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%s",&s);
		l=strlen(s);
		if(strcmp(&s[l-3],"ing")==0)
		{
			s[l-3]='\0';
		}
		else if(strcmp(&s[l-2],"er")==0)
		{
			s[l-2]='\0';
		}
		else if(strcmp(&s[l-2],"ly")==0)
		{
			s[l-2]='\0';
		}
		my_printf("%s\n",s);
	}
	return 0;
}