#define NUM_ITER 31888

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int len[100];
	char word[100][20];
	int i;
	for(i=0;i<n;i++)
	{
		my_scanf("%s",word[i]);
		len[i]=strlen(word[i]);
		
	}
	int j;


	for(j=0;j<n;j++)
	{
		if(word[j][len[j]-2] == 'e' && word[j][len[j]-1] == 'r')
		{
			for(i=0;i<(len[j]-2);i++)
			{
				my_printf("%c",word[j][i]);
			}
			my_printf("\n");
		}
		else
		{
			if(word[j][len[j]-2] == 'l' && word[j][len[j]-1] == 'y')
			{
				for(i=0;i<(len[j]-2);i++)
				{
					my_printf("%c",word[j][i]);
				}
				my_printf("\n");
			}
			else
			{
				if(word[j][len[j]-3] == 'i' && word[j][len[j]-2] == 'n' && word[j][len[j]-1] == 'g')
				{
					for(i=0;i<(len[j]-3);i++)
					{
						my_printf("%c",word[j][i]);
					}
					my_printf("\n");
				}
				else
				{
				}
			}
		}
	}

	return 0;
}