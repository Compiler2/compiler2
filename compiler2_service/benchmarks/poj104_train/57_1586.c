#define NUM_ITER 30385

#include <header.h>

int main_bench()
{
	int n,i,j;
	char word[50];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",word);
		j=strlen(word);
		if(word[j-3]=='i')
		{
			word[j-3]='\0';
		}
		else{
			word[j-2]='\0';
		}
		my_printf("%s\n",word);
	}
	return 0;
}