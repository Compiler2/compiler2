#include <header.h>


int main_bench()
{
	struct word{
		int num;
		char words[46];
	}word[1000];
	int n;
	my_scanf("%d",&n);
	int i,j,m;
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&word[i].words);
		for(j=0;word[i].words[j]!='\0';j++){}
		word[i].num=j;
	}
	j=0;
	m=0;

	int max=80;
	int length=word[0].num+1;
         my_printf("%s",word[0].words);
	for(i=1;i<n;i++)
	{
                  
		if(word[i].num<=max-length)
		{
			my_printf(" %s",word[i].words);
			length=length+word[i].num+1;
		}
		else if(word[i].num>max-length)
		{
			my_printf("\n%s",word[i].words);
			length=word[i].num+1;
		}
	}
	return 0;
}