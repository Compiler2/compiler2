#define NUM_ITER 34247

#include <header.h>

int why(char *s)
{
	int i;
	if(s[0]=='_' || (s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z'))
		for(i=1;s[i];i++)
			if(s[i]=='_' || (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
				continue;
			else
				return 0;
	else
		return 0;
	return 1;
}
int main_bench()
{
	char s[1000];
	int n,i;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(s);
		my_printf("%d\n",why(s));
	}
	return 0;
}