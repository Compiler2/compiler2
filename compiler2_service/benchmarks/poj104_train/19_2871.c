#include <header.h>


typedef struct {
	char str[100];
	int length;
} WORD;

WORD words[100];

int main_bench()
{
	char str[100];
	char a[100], b[100];
	
	int i, j, k;
	int numOfWords;
	
	gets(str);
	gets(a);
	gets(b);
	
	
	
	
	
	for (i = 0, j = 0, k = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ') 
		{
			words[j].str[k++] = str[i];
		}
		else
		{
			words[j++].length = k - 1;
			k = 0;
		}
	}
	
	numOfWords = j + 1;
	
	
	
	for (i = 0; i < numOfWords; i++)
	{
		if (strstr(words[i].str, a) && strlen(words[i].str) == strlen(a))
		{
			my_printf("%s", b);
		}
		else
		{
			my_printf("%s", words[i].str);
		}
		
		if ( i != numOfWords - 1)
			my_printf(" ");
	}
	
	
	return 0;	
}
