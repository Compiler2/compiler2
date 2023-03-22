#include <header.h>

int main_bench()
{
	char word1[100]={'\0'},word2[100]={'\0'};
	int num1[128]={0},num2[128]={0};
	int i,j,k1,k2;
	my_scanf("%s %s",word1,word2);
	k1=strlen(word1);
	k2=strlen(word2);
	if(k1!=k2) my_printf("NO");
	else
	{
		for(i=0;i<=k1-1;i++)
		{num1[word1[i]]=num1[word1[i]]+1;}
		for(i=0;i<=k2-1;i++)
		{num2[word2[i]]=num2[word2[i]]+1;}
		j=0;
		for(i=0;i<=127;i++)
		{if(num1[i]==num2[i]) j=j+1;}
		if(j==128) my_printf("YES");
		else my_printf("NO");
	}
	return 0;
}