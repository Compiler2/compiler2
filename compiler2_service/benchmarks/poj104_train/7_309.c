#define NUM_ITER 847004

#include <header.h>


int main_bench()
{
	
	char str[256], substr[256], replace[256];
	char p[256];

	
	int k = 0;
	
	int m;

	
	
	my_scanf("%s", str);

	my_scanf("%s", substr);

	my_scanf("%s", replace);

	
	int str1 = strlen(str), str2 = strlen(substr), str3 = strlen(replace);
	for(int i = 0; i <= str1 - str2; i++)
	{
		
		m = 1; 
		for(int l = 0; l < strlen(substr); l++)
		{
			
			if (str[i + l] != substr[l])
			{
				m = 0;
				break;
			}
		}

		
		
		
		int j;
		if(m)
		{
			k = 1;     
			
			for(j = i; j < i + str3; j++)
				p[j] = replace[j - i];
			
			for(k = i + str2, i = j; k < str1; k++, i++)
				p[i] = str[k];
			
			break;
		}
		else
		{
			
			p[i] = str[i];
		}
	}

	
	
	
	if(k)
	{
		
		for(int i = 0; i < strlen(str) - strlen(substr) + strlen(replace); i++)
		    my_printf("%c", p[i]);
	}
	else
	{
		my_printf("%s", str);
	}
	
	return 0;
}