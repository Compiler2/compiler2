#define NUM_ITER 685963

#include <header.h>

int main_bench()
{
	char s[100],a[100],b[100];
	char word[50][100];
	int i,j,num=1;
	int count[50]={0};
	gets(s);
	gets(a);
	gets(b);
	for(i=0;i<=strlen(s);i++)
	{
		if(s[i]!=' '&&s[i]!='\0')
			count[num]++;
		if(s[i]==' '||s[i]=='\0')
		{
		    for(j=0;j<count[num];j++)
			{
				word[num][j]=s[i-count[num]+j];
			}
			word[num][count[num]]='\0';

			if(s[i]==' ')
				num++;
		}
	}
	for(i=1;i<=num;i++)
	{
		if(strcmp(word[i],a)==0)
			strcpy(word[i],b);
		else
			continue;
	}
	for(i=1;i<num;i++)
	{
		my_printf("%s ",word[i]);
	}
	my_printf("%s",word[num]);
}
