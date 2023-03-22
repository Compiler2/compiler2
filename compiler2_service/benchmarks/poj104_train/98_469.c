#include <header.h>

int main_bench()
{
	int n,i,length=0;
	char word[41];
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&word);
		if(i==0)
			my_printf("%s",word),length=strlen(word);
		else
		{
				length+=(strlen(word)+1);
				if(length>80)
					my_printf("\n%s",word),length=strlen(word);
				else
					my_printf(" %s",word);
		}
	}
	return 0;
}
