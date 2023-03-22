#include <header.h>


int main_bench()
{
	int i, j=0, m=0;
	int sum[301] ={0};
	char word[3000];

	gets(word);
	
	for(i = 0; word[i]!='\0'; i++)
	{
		if(word[i]!=' ')
			sum[j]++;
		else
		{
			j++;
			while(word[i]==' ')
				i++;
			i = i - 1;
		}
	}
		my_printf("%d", sum[0]);
		for(i = 1; i <= j; i++)
			my_printf(",%d", sum[i]);
	return 0;
}