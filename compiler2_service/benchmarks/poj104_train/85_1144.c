#define NUM_ITER 32160

#include <header.h>


int main_bench()
{
	int n;

	my_scanf("%d",&n);
	my_scanf("\n");
	
	while(n--)
	{
		char str[21];
		gets(str);
		int i;
		char a=str[0];
		if (!((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a=='_')))
		{
			puts("no");
			continue;
		}

		for(i=1;i<strlen(str);i++)
		{
			a = str[i];
			if (!((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a=='_')||(a>='0'&&a<='9')))
			{
				puts("no");
				break;
			}
		}

		if(i>=strlen(str))
			puts("yes");
	}

	return 0;
}