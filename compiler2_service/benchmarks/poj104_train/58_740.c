#define NUM_ITER 31045

#include <header.h>

int main_bench()
{
	int n,i,j,ans;
	char s[100];
	my_scanf("%d\n",&n);
	for (i=0;i<n;i++)
	{
		gets(s);
		ans=1;
		if ((s[0]=='_')||((s[0]>='a' && s[0]<='z')||(s[0]>='A' && s[0]<='Z')))
			for (j=1;j<strlen(s);j++)
				if ((s[j]!='_')&&(s[j]<'a' || s[j]>'z')&&(s[j]<'A' || s[j]>'Z')&&(s[j]<'0' || s[j]>'9'))
					ans=0;
				else continue;
		else 
			ans=0;
		my_printf("%d\n",ans);
	}
	return 0;
}

