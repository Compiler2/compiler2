#include <header.h>


int main_bench()
{
	int n;

	my_scanf("%d",&n);
	my_scanf("\n");
	
	while(n--)
	{
		char str[256];
		char pair[256];
		gets(str);
		int i;
		
		for(i=0;i<strlen(str);i++)
		{
			switch(str[i])
			{
			case 'A':
				pair[i]='T';
				break;
			case 'T':
				pair[i]='A';
				break;
			case 'G':
				pair[i]='C';
				break;
			case 'C':
				pair[i]='G';
				break;
			}
		}
		pair[i]='\0';
		puts(pair);
	}

	return 0;
}