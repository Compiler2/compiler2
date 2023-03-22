#include <header.h>

const int M = 21;

int main_bench()
{
	char s[M];
	int n,i,j;
	my_scanf("%d",&n);
	i = n;
	while(i--)
	{
		my_scanf("%s",&s);
		for(j = 0;s[j]!='\0';j++)
		{
			
			if(!((s[j]=='_')||(s[j]>='0'&& s[j]<='9' && j>0)||(s[j]>='a'&& s[j]<='z')||(s[j]>='A'&& s[j]<='Z')))
				break;
		}
		my_printf(s[j] ? "no\n":"yes\n");
	}
	return 0;
}