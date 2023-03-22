#include <header.h>

int main_bench()
{
	int n,p=0,m=0;
	int i;
	char word[60],s[60];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%s",word);
    	m=strlen(word);
		if (p+m>80)
		{
			my_printf("\n");
			p=0;
		}
		else if(i>0)
		{
			my_printf(" ");
		}
		p=p+m+1;
		strcpy(s,word);
		my_printf(s);
	}
	my_printf("\0");
	return 0;
}