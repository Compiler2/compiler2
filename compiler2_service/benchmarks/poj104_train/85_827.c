#define NUM_ITER 29457

#include <header.h>

int main_bench()
{
	int n,i,j,t=0,b;
	char s[10000];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		b = 0;
		my_scanf("%s",s);
		if(isalpha(s[0])==0&&s[0]!='_')
			b=1;
		else
		{
			for(j=0;j<strlen(s);j++)
			{
				if (isalnum(s[j])==0&&s[j]!='_')
			
				{
					b = 1;
					break;
				}
			}
		}
		if(b==0)
			my_printf("yes\n");
		else
			my_printf("no\n");
	}
	return 0;
}