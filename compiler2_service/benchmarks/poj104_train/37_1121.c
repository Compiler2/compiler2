#include <header.h>

int main_bench()
{ 
    int cases,sum[26],i,max,j;
	char str[1001];
	my_scanf("%d",&cases);
	while(cases>0)
	{
		my_scanf("%s",str);for(i=0;i<26;i++) sum[i]=0;
		for(i=0;i<strlen(str);i++)
			sum[str[i]-'a']++;
		max=0;
		for(j=0;j<strlen(str)+1;j++)
		{if(sum[str[j]-'a']==1)
			{my_printf("%c\n",str[j]);
		break;}


			if(j==strlen(str))
				my_printf("no");}cases--;
}}