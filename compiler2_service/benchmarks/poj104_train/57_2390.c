#include <header.h>

int main_bench()
{
	int n,i,a;
	char word[20];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",word);
		a=strlen(word);
		if(word[a-1]=='r')
		{
			word[a-1]='\0';
				word[a-2]='\0';
		}
		if(word[a-1]=='y')
		{
			word[a-1]='\0';
				word[a-2]='\0';
		}
		if(word[a-1]=='g')
		{
			word[a-1]='\0';
				word[a-2]='\0';
				word[a-3]='\0';
		}
     my_printf("%s\n",word);
	}

	return 0;
}
