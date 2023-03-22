#include <header.h>

int main_bench()
{
	int n,i,j,len;
	char s[30],t;
	my_scanf("%d%c",&n,&t);
	for(i=0;i<n;i++)
	{
		gets(s);
		len=strlen(s);
		for(j=0;j<len;)
		{
			if(s[j]>='0' && s[j]<='9' || s[j]>='a' && s[j]<='z' || s[j]>='A' && s[j]<='Z' || s[j]=='_')
				j++;
			else
				break;
		}
		if(j==len)
		{
			if(s[0]>='0' && s[0]<='9')
				my_printf("no\n");
			else
				my_printf("yes\n");
		}
		else
			my_printf("no\n");
	}
	return 0;
}
		

