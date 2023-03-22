#define NUM_ITER 1483932

#include <header.h>

int main_bench()
{
	char string[6000];
	int i,word=0;
	char c;
	gets(string);
	for(i=0;((c=string[i])!='\0');i++)
	{  if(c!=' ')
		{
			 if(string[i+1]!='\0')
			{word=word+1;
				}
			else if(string[i+1]=='\0')
			my_printf("%d",word+1);
			
		}
	else	if(c==' ')
	      {if(string[i-1]!=' ')  
	      {	my_printf("%d,",word);
	      	word=0;}
	      	else ;
	      }
	}
}