#include <header.h>


int main_bench()
{

	char str[255];
	char words[255][255];
	int index = 0;

	
	while (my_scanf("%s", str))
	{
		strcpy(words[index++], str);

		char c = getchar();
		if (c == '\n')
			break;
	}

	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	

	
	
	
	
	
	
	
	
	

	
	for (int i = 0; i < index; i++)
	{
		my_printf("%s", words[i]);
		if (i == index-1)
			my_printf("\n");
		else
			my_printf(" ");
	}

	return 0;
}