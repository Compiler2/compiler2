#define NUM_ITER 313928

#include <header.h>

int main_bench()
{
	char *s,*a,*b,*word;
	int i,j=0,flag=0;
	s=(char*)malloc(100*sizeof(char));
	a=(char*)malloc(100*sizeof(char));
	b=(char*)malloc(100*sizeof(char));
	word=(char*)malloc(100*sizeof(char));
	gets(s);
	gets(a);
	gets(b);
	i=0;
	while(*(s+i))
	{
		if (*(s+i)==' ')
		{
			if (flag!=0) my_printf(" ");
			flag=1;
			*(word+j)='\0';
			j=0;
			if (strcmp(word,a)==0)	my_printf("%s",b);
			else my_printf("%s",word);
		}
		else 
		{
			*(word+j)=*(s+i);
			j++;
		}
		i++;
	}
	*(word+j)='\0';
	if (flag!=0) my_printf(" ");
	if (strcmp(word,a)==0)	my_printf("%s",b);
	else my_printf("%s",word);
	
}