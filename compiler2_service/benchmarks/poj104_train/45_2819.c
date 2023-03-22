#include <header.h>

int main_bench()
{
	char s[50], w[50];
	int i, j=0, mark=0;
	my_scanf("%s %s", s, w);
	for (i=0; i<strlen(s); i++)
	{
		while (j<strlen(w))
		{
		    if (s[i]==w[j])
			{
				mark=j;
				j=mark+1;
				break;
			}   
			else 
			{
				j++;
			}
		
		}
		
	}
	my_printf("%d", mark-strlen(s)+1);
	
		return 0;
}