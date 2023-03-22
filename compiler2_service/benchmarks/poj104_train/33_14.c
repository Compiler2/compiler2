#include <header.h>


int main_bench()
{
	int i, j, n, oper=0;
	my_scanf("%d", &n);
	char s[257];
	gets(s);
	for(i=0; i<n; i++)
	{
		gets(s);
		for(j=0; j<strlen(s); j++)
		{
			switch(s[j])
			{
			case 'C':
				s[j] = 'G';
				break;
			case 'G':
				s[j] = 'C';
				break;
			case 'A':
				s[j] = 'T';
				break;
			case 'T':
				s[j] = 'A';
				break;
			}
		}
		if(oper)
			my_printf("\n");
		oper = 1;
		my_printf("%s", s);
	}
	return 0;
}
