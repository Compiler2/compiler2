#define NUM_ITER 32053

#include <header.h>


int main_bench()
{
	int n,i,a;
	char word[20],*p;

	my_scanf("%d",&n);
	while(n>0)
	{
		my_scanf("%s",word);
		a=strlen(word);
		p=word+a-1;
		if(*(p-1)=='e'&&*p=='r')
		{
			*(p-1)='\0';
			my_printf("%s\n",word);
		}
		else if(*(p-1)=='l'&&*p=='y')
		{
			*(p-1)='\0';
			my_printf("%s\n",word);
		}
		else if(*(p-2)=='i'&&*(p-1)=='n'&&*p=='g')
		{
			*(p-2)='\0';
			my_printf("%s\n",word);
		}
         n--;
	}
}