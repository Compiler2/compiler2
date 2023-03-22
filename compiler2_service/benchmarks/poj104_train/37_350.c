#include <header.h>

int main_bench()
{
	int t,a[26],i,j,len;
	char input[100000];
	my_scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		my_scanf("%s",input);
		len=strlen(input);
		for(j=0;j<26;j++)
			a[j]=0;
		for(j=0;j<len;j++)
		{
			a[input[j]-'a']++;
		}
		for(j=0;j<len;j++)
		{
			if(a[input[j]-'a']==1)break;
		}
		if(j<len-1)
			my_printf("%c\n",input[j]);
		else my_printf("no\n");
	}
	return 0;
}



