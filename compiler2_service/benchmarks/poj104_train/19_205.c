#define NUM_ITER 812227

#include <header.h>

int main_bench()
{

	int i,n;
		
	char s[120];
	char word[120];
	char a[120];
	char b[120];

	gets(s);

	gets(a);


	gets(b);
	

	for(i=0;s[i]!=' '&&s[i]!='\0';i++)
	{
		word[i]=s[i];
		
	}
	word[i]='\0';
	if(strcmp(word,a)==0) 
	{
		
	    my_printf("%s",b);
	}
	else
		my_printf("%s",word);
	n=i;
while(s[i]!='\0')
{
	i++;

	for(;s[i]!=' '&&s[i]!='\0';i++)
	{
		word[i-n-1]=s[i];
	

	}

	word[i-n-1]='\0';
    if(strcmp(word,a)==0) 
	{
		
	    my_printf(" %s",b);
	}
	else
		my_printf(" %s",word);
	
	
n=i;
}

return 0;
}