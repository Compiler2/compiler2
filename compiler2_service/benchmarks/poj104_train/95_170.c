#define NUM_ITER 1082590

#include <header.h>

int main_bench()
{
	char s1[80],s2[80];
	gets(s1);
	gets(s2);
	int i;

	for(i=0;s1[i]!='\0' || s2[i]!='\0';i++)
	{
		s1[i]=(s1[i]-'A')%32+'A';
        s2[i]=(s2[i]-'A')%32+'A';
		if(s1[i]==s2[i])
			continue;
		else
		{ 
			if(s1[i]>s2[i])
			{
				my_printf(">\n");
			    break;
			}
			else
			{	
				my_printf("<\n");
				break;
			}
		}

	}
	if( s1[i]=='\0')
		my_printf("=");
	return 0;
}

