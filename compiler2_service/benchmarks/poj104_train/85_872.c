#include <header.h>

int main_bench()
{
	int n,i=1,j,len;
	char s[21];
	my_scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		i=0;
		my_scanf("%s",s);
	if(s[0]=='_'||(s[0]>='A'&&s[0]<='Z')||(s[0]>='a'&&s[0]<='z'))
	{
		while(s[i]!='\0')
		{
			if((s[i]<'0'||(s[i]>'9'&&s[i]<'A')||(s[i]>'Z'&&s[i]<'a')||s[i]>'z')&&s[i]!='_')
			{
				my_printf("no\n");
				break;
			}
			i++;
		}
		if(s[i]=='\0')my_printf("yes\n");
	}
	else
	my_printf("no\n");
}
return 0;
}
