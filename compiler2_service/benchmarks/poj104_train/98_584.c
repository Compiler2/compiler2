#define NUM_ITER 31513

#include <header.h>

int main_bench()
{
	int n,i,m=0;
	struct word
	{
		char word[40];
		int len;
	} words[500];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",words[i].word);
		words[i].len=strlen(words[i].word);
	}
	my_printf("%s",words[0].word);
	m=words[0].len;
	for(i=1;i<n;i++)
	{
		m+=(words[i].len+1);
		if(m<=80) my_printf(" %s",words[i].word);
		else 
		{
			my_printf("\n");
			my_printf("%s",words[i].word);
			m=words[i].len;
		}
	}
	my_printf("\n");
}
