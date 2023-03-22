#include <header.h>

int main_bench()
{
	int word_num,i,sum;
	char word[500][45];
	my_scanf("%d\n",&word_num);
	sum=0;
	for(i=0;i<word_num;i++)
	{
		my_scanf("%s",&word[i]);
	}
	for(i=0;i<word_num;i++)
	{
		if(sum==0)
		{
			my_printf("%s",word[i]);
			sum+=strlen(word[i]);
		}
		else
		{
			sum+=strlen(word[i])+1;
			if(sum<=80)
			{
				my_printf(" %s",word[i]);
			}
			else
			{
				sum=0;
				i--;
				my_printf("\n");
			}
		}
	}
	return 0;
}

		

