#define NUM_ITER 28946

#include <header.h>

int main_bench()
{
	int n,i,j,len,a;
	char s[21];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a=0;
		my_scanf("%s",&s);
		len=strlen(s);
		for(j=0;j<len;j++)
		{
			if((s[j]=='_')||(s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9'&&j>0))
			{
				a++;
			}
		}
		if(a<len)
		{
			my_printf("no\n");
		}
		if(a==len)
		{
			my_printf("yes\n");
		}
	}
	return 0;
}
