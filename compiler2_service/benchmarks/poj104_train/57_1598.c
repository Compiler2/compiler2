#define NUM_ITER 28821

#include <header.h>


int main_bench()
{
	int n, i, a, j;
	char word[20];
	my_scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s", word);
		a = strlen(word) - 1;
		if(word[a]=='r' || word[a]=='y')
		{   
		   word[(a-1)] = '\0';
		}
		if(word[a]=='g')
		{
			word[(a-2)] = '\0';
		}
	   my_printf("%s\n", word);
	}
	return 0;
}