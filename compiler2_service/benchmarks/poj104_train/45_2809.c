#include <header.h>

int main_bench()
{
	char s[50],w[50];
my_scanf("%s ",s);
my_scanf("%s", w);
	int i,j=0;
	for(i=0;i<strlen(w);i++)
	{
		for(;j<strlen(s);)
		{
			if(s[j]==w[i])
			{
				j++;
			}
				break;
				
			
		}
		if(j==strlen(s))
		{
			my_printf("%d",i-j+1);
			break;
		}
	}

	return 0;
}

