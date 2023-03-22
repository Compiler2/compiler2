#include <header.h>

int main_bench()
{int n;
my_scanf("%d",&n);
int i;
int k=0,m=0;
char s[45];
int len;
for(i=0;i<n;i++)
{
	my_scanf("%s",s);
	len=strlen(s);
	k=k+len;
	m++;
	if(m==1)
	{my_printf("%s",s);}
	else
	{
	if((k+m-1)<=80)
	{ my_printf(" ");
	my_printf("%s",s);
	}
	else
	{my_printf("\n");
	my_printf("%s",s);
	k=len;
	m=1;}
	}
}
return 0;
}
